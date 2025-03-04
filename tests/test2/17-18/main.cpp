#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include "Doctor.h"
#include "Hospital.h"

using namespace std;

template <class T>
void ASSERT_EQUAL(T t1, T t2) {
    if (t1 == t2)
        cout << "OK ";
    else
        cout << "FAIL ";
}

void alinea_a() {
    cout << "Alinea a:" << endl;
    Hospital hosp;
    queue<Patient> q1;
    q1.push(Patient(123,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    Doctor d1(1,"medicalSpecialtyX",q1);
    hosp.addDoctor(d1);
    Doctor d2(2,"medicalSpecialtyZ");
    hosp.addDoctor(d2);
    queue<Patient> q3;
    q3.push(Patient(111,"medicalSpecialtyA"));
    q3.push(Patient(666,"medicalSpecialtyA"));
    q3.push(Patient(777,"medicalSpecialtyA"));
    Doctor d3(3,"medicalSpecialtyA",q3);
    hosp.addDoctor(d3);
    queue<Patient> q4;
    q4.push(Patient(456,"medicalSpecialtyX"));
    Doctor d4(4,"medicalSpecialtyX",q4);
    hosp.addDoctor(d4);
    ASSERT_EQUAL<int>(0,hosp.numPatients("medicalSpecialtyZ"));
    ASSERT_EQUAL<int>(4,hosp.numPatients("medicalSpecialtyX"));
    ASSERT_EQUAL<int>(3,hosp.numPatients("medicalSpecialtyA"));
}

void alinea_b() {
    cout << endl << endl << "Alinea b:" << endl;
    Hospital hosp;

    queue<Patient> q1;
    q1.push(Patient(123,"medicalSpecialtyZ"));
    q1.push(Patient(456,"medicalSpecialtyZ"));
    Doctor d1(1,"medicalSpecialtyZ",q1);
    hosp.addDoctor(d1);

    queue<Patient> q2;
    q2.push(Patient(321,"medicalSpecialtyZ"));
    Doctor d2(2,"medicalSpecialtyZ",q2);
    hosp.addDoctor(d2);

    queue<Patient> q3;
    q3.push(Patient(111,"medicalSpecialtyZ"));
    q3.push(Patient(666,"medicalSpecialtyZ"));
    Doctor d3(3,"medicalSpecialtyZ",q3);
    hosp.addDoctor(d3);

    queue<Patient> q4;
    Doctor d4(4,"medicalSpecialtyX",q4);
    hosp.addDoctor(d4);

    queue<Patient> q5;
    q5.push(Patient(341,"medicalSpecialtyB"));
    Doctor d5(5,"medicalSpecialtyB",q5);
    hosp.addDoctor(d5);

    hosp.sortDoctors();
    list<Doctor> res = hosp.getDoctors();
    ASSERT_EQUAL<int>(5, res.size());

    ASSERT_EQUAL<int>(4,res.front().getCode());
    ASSERT_EQUAL<int>(0,res.front().getPatients().size());
    res.pop_front();
    ASSERT_EQUAL<int>(5,res.front().getCode());
    ASSERT_EQUAL<int>(1,res.front().getPatients().size());
    res.pop_front();
    ASSERT_EQUAL<int>(2,res.front().getCode());
    ASSERT_EQUAL<int>(1,res.front().getPatients().size());
    res.pop_front();
    ASSERT_EQUAL<int>(1,res.front().getCode());
    ASSERT_EQUAL<int>(2,res.front().getPatients().size());
    res.pop_front();
    ASSERT_EQUAL<int>(3,res.front().getCode());
    ASSERT_EQUAL<int>(2,res.front().getPatients().size());
    res.pop_front();
}

void alinea_c() {
    cout << endl << endl << "Alinea c:" << endl;
    Doctor d1(1,"medicalSpecialtyX");
    d1.moveToFront(111);
    queue<Patient> res = d1.getPatients();
    ASSERT_EQUAL<int>(0,res.size());

    queue<Patient> q1;
    q1.push(Patient(123,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    q1.push(Patient(789,"medicalSpecialtyX"));
    Doctor d2(2,"medicalSpecialtyX",q1);

    d2.moveToFront(789);
    res = d2.getPatients();
    ASSERT_EQUAL<int>(3,res.size());
    ASSERT_EQUAL<int>(789,res.front().getCode());
    res.pop();
    ASSERT_EQUAL<int>(123,res.front().getCode());
    res.pop();
    ASSERT_EQUAL<int>(456,res.front().getCode());

    Doctor d3(3,"medicalSpecialtyX",q1);
    d3.moveToFront(111);
    res = d3.getPatients();
    ASSERT_EQUAL<int>(3,res.size());
    ASSERT_EQUAL<int>(123,res.front().getCode());
    res.pop();
    ASSERT_EQUAL<int>(456,res.front().getCode());
    res.pop();
    ASSERT_EQUAL<int>(789,res.front().getCode());
}

void alinea_d() {
    cout << endl << endl << "Alinea d:" << endl;
    Hospital hosp;

    queue<Patient> q;
    Doctor d1(1,"medicalSpecialtyZ",q);
    hosp.addDoctor(d1);

    Doctor d2(2,"medicalSpecialtyX",q);
    hosp.addDoctor(d2);

    queue<Patient> q3;
    Doctor d3(3,"medicalSpecialtyZ",q);
    hosp.addDoctor(d3);

    Doctor d4(4,"medicalSpecialtyX",q);
    hosp.addDoctor(d4);

    ASSERT_EQUAL(true, hosp.addDoctor(50,"medicalSpecialtyX"));
    list<Doctor> res = hosp.getDoctors();
    ASSERT_EQUAL<int>(5, res.size());
    ASSERT_EQUAL<int>(50, res.back().getCode());
    ASSERT_EQUAL<int>(1, res.front().getCode());

    ASSERT_EQUAL(false, hosp.addDoctor(55,"medicalSpecialtyX"));
    res = hosp.getDoctors();
    ASSERT_EQUAL<int>(5, res.size());

    ASSERT_EQUAL(true, hosp.addDoctor(60,"medicalSpecialtyA"));
    res = hosp.getDoctors();
    ASSERT_EQUAL<int>(6, res.size());
    ASSERT_EQUAL<int>(60, res.back().getCode());
    ASSERT_EQUAL<int>(1, res.front().getCode());
}

void alinea_e() {
    cout << endl << endl << "Alinea e:" << endl;
    Hospital hosp;

    queue<Patient> q1;
    q1.push(Patient(123,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    q1.push(Patient(789,"medicalSpecialtyX"));
    Doctor d1(10,"medicalSpecialtyX",q1);
    hosp.addDoctor(d1);

    Doctor d2(20,"medicalSpecialtyZ");
    hosp.addDoctor(d2);

    queue<Patient> q3;
    q3.push(Patient(111,"medicalSpecialtyZ"));
    q3.push(Patient(666,"medicalSpecialtyZ"));
    q3.push(Patient(777,"medicalSpecialtyZ"));
    Doctor d3(30,"medicalSpecialtyZ",q3);
    hosp.addDoctor(d3);

    queue<Patient> q4;
    q4.push(Patient(341,"medicalSpecialtyX"));
    Doctor d4(40,"medicalSpecialtyX",q4);
    hosp.addDoctor(d4);

    queue<Patient> q5;
    q5.push(Patient(111,"medicalSpecialtyZ"));
    q5.push(Patient(666,"medicalSpecialtyZ"));
    Doctor d5(50,"medicalSpecialtyZ",q5);
    hosp.addDoctor(d5);

    //ver se lança a exceção

    try {
        hosp.removeDoctor(44);
    }
    catch (...) {
        cerr << endl << "DoctorInexistente -> OK" << endl;
        //throw Hospital::DoctorInexistent();
    }

    ASSERT_EQUAL<int>(5,hosp.getDoctors().size());

    queue<Patient> p1 = hosp.removeDoctor(50);
    ASSERT_EQUAL<int>(2,p1.size());
    ASSERT_EQUAL<int>(111,p1.front().getCode());
    ASSERT_EQUAL<int>(4,hosp.getDoctors().size());

    p1 = hosp.removeDoctor(20);
    ASSERT_EQUAL<int>(0,p1.size());
    ASSERT_EQUAL<int>(3,hosp.getDoctors().size());
}

void alinea_f() {
    cout << endl << endl << "Alinea f:" << endl;
    Hospital hosp;

    queue<Patient> q1;
    q1.push(Patient(123,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    Doctor d1(1,"medicalSpecialtyX",q1);
    hosp.addDoctor(d1);

    Doctor d2(2,"medicalSpecialtyZ");
    hosp.addDoctor(d2);

    queue<Patient> q3;
    q3.push(Patient(111,"medicalSpecialtyZ"));
    q3.push(Patient(666,"medicalSpecialtyZ"));
    q3.push(Patient(777,"medicalSpecialtyZ"));
    Doctor d3(3,"medicalSpecialtyZ",q3);
    hosp.addDoctor(d3);

    queue<Patient> q4;
    q4.push(Patient(341,"medicalSpecialtyX"));
    Doctor d4(4,"medicalSpecialtyX",q4);
    hosp.addDoctor(d4);

    ASSERT_EQUAL(true,hosp.putInLessBusyDoctor(321,"medicalSpecialtyX"));
    list<Doctor> docs = hosp.getDoctors();
    queue<Patient> Patients1 = docs.front().getPatients();
    ASSERT_EQUAL<int>(3, Patients1.size());
    docs.pop_front(); docs.pop_front(); docs.pop_front();

    queue<Patient> patients2 = docs.front().getPatients();
    ASSERT_EQUAL<int>(2, patients2.size());
    ASSERT_EQUAL<int>(321, patients2.back().getCode());

    ASSERT_EQUAL(true,hosp.putInLessBusyDoctor(888,"medicalSpecialtyZ"));
    docs = hosp.getDoctors();
    queue<Patient> patients3 = docs.front().getPatients();
    ASSERT_EQUAL<int>(3, patients3.size());

    docs.pop_front();
    patients3 = docs.front().getPatients();
    ASSERT_EQUAL<int>(1, patients3.size());
    ASSERT_EQUAL<int>(888, patients3.back().getCode());

    docs.pop_front();
    patients3 = docs.front().getPatients();
    ASSERT_EQUAL<int>(3, patients3.size());

    ASSERT_EQUAL(false,hosp.putInLessBusyDoctor(222,"medicalSpecialtyK"));
    ASSERT_EQUAL(false,hosp.putInLessBusyDoctor(444,"medicalSpecialtyW"));
}

void alinea_g() {
    cout << endl << endl << "Alinea g:" << endl;
    Hospital hosp(2);
    queue<Patient> q1;
    q1.push(Patient(123,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    q1.push(Patient(456,"medicalSpecialtyX"));
    Doctor d1(1,"medicalSpecialtyX",q1);
    hosp.addDoctor(d1);

    Doctor d2(2,"medicalSpecialtyZ");
    hosp.addDoctor(d2);

    queue<Patient> q3;
    q3.push(Patient(111,"medicalSpecialtyZ"));
    q3.push(Patient(666,"medicalSpecialtyZ"));
    q3.push(Patient(777,"medicalSpecialtyZ"));
    Doctor d3(3,"medicalSpecialtyZ",q3);
    hosp.addDoctor(d3);

    queue<Patient> q4;
    q4.push(Patient(341,"medicalSpecialtyX"));
    Doctor d4(4,"medicalSpecialtyX",q4);
    hosp.addDoctor(d4);

    stack<Patient> s1;
    s1.push(Patient(222,"medicalSpecialtyA"));
    hosp.addTrays(s1);
    stack<Patient> s2;
    s2.push(Patient(555,"medicalSpecialtyB"));
    s2.push(Patient(865,"medicalSpecialtyC"));
    hosp.addTrays(s2);
    stack<Patient> s3;
    s3.push(Patient(341,"medicalSpecialtyD"));
    hosp.addTrays(s3);

    hosp.processPatient(2);
    list<stack<Patient> > b1 = hosp.getTrays();
    ASSERT_EQUAL<int>(3, b1.size());
    ASSERT_EQUAL<int>(222, b1.front().top().getCode());

    hosp.processPatient(1);
    b1 = hosp.getTrays();
    ASSERT_EQUAL<int>(3, b1.size());
    ASSERT_EQUAL<int>(123, b1.front().top().getCode());

    hosp.processPatient(3);
    b1=hosp.getTrays();
    ASSERT_EQUAL<int>(3, b1.size());
    ASSERT_EQUAL<int>(123, b1.front().top().getCode());
    ASSERT_EQUAL<int>(2, b1.back().size());
    ASSERT_EQUAL<int>(111, b1.back().top().getCode());

    hosp.processPatient(3);
    b1=hosp.getTrays();
    ASSERT_EQUAL<int>(4, b1.size());
    ASSERT_EQUAL<int>(1, b1.back().size());
    ASSERT_EQUAL<int>(666, b1.back().top().getCode());

    hosp.processPatient(6);
    b1=hosp.getTrays();
    ASSERT_EQUAL<int>(4, b1.size());
    ASSERT_EQUAL<int>(1, b1.back().size());
    ASSERT_EQUAL<int>(666, b1.back().top().getCode());
}

void alinea_h() {
    cout << endl << endl << "Alinea h:" << endl;
    Hospital hosp(2);

    stack<Patient> s1;
    s1.push(Patient(222,"medicalSpecialtyA"));
    hosp.addTrays(s1);

    stack<Patient> s2;
    s2.push(Patient(555,"medicalSpecialtyB"));
    s2.push(Patient(341,"medicalSpecialtyC"));
    hosp.addTrays(s2);

    stack<Patient> s3;
    s3.push(Patient(341,"medicalSpecialtyC"));
    hosp.addTrays(s3);

    stack<Patient> s4;
    s4.push(Patient(341,"medicalSpecialtyC"));
    s4.push(Patient(111,"medicalSpecialtyC"));
    hosp.addTrays(s4);

    ASSERT_EQUAL<int>(0, hosp.removePatients(777));
    list<stack<Patient> > b1 = hosp.getTrays();
    ASSERT_EQUAL<int>(4, b1.size());
    ASSERT_EQUAL<int>(222, b1.front().top().getCode());

    ASSERT_EQUAL<int>(2, hosp.removePatients(341));
    b1 = hosp.getTrays();
    ASSERT_EQUAL<int>(3, b1.size());
    ASSERT_EQUAL<int>(222, b1.front().top().getCode());
    b1.pop_front();
    ASSERT_EQUAL<int>(1, b1.front().size());
    ASSERT_EQUAL<int>(555, b1.front().top().getCode());
    b1.pop_front();
    ASSERT_EQUAL<int>(2, b1.front().size());
    ASSERT_EQUAL<int>(111, b1.front().top().getCode());

    ASSERT_EQUAL<int>(1, hosp.removePatients(222));
    b1 = hosp.getTrays();
    ASSERT_EQUAL<int>(2, b1.size());
}


void all_tests() {
    alinea_a();
    alinea_b();
    alinea_c();
    alinea_d();
    alinea_e();
    alinea_f();
    alinea_g();
    alinea_h();
}

int main() {

    all_tests();

    return 0;
}