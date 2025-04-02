
As a student, I want to select courses smoothly, so that I can meet requirements for graduation credits {
	Basic Flow {
    	(User) 1. the student shall log in to system.
    	(User) 2. the student shall review list of courses relevant to their training program.
    	(User) 3. the student shall choose this corresponding course.
    	(System) 4. the system shall checks whether this student has permission. (functional)
    	(System) 5. the system shall checks whether capacity of course is sufficient. (functional)
    	(System) 6. the system shall checks whether there is any conflict with that class schedule. (functional)
    	(System) 7. the system shall modify course selection records systematically. (functional)
	}
	Alternative Flow {
		A. At any time, The system is temporarily unavailable error occurs :
    		1.  informs student and suggests trying again later.
    	B. At any time, The course capacity is full :
    		1.  informs students that course are full.
	}
}

As a student, I want to view my class schedule, so that I can find out which classroom I have class {
	Basic Flow {
    	(User) 1. the student shall log in to the system.
    	(User) 2. the student shall review his own schedule.
    	(User) 3. the student shall use options to filter The schedule for The corresponding time.
    	(System) 4. the system shall displays course schedule. (functional)
	}
	Alternative Flow {
		A. At any time, The system is temporarily unavailable error occurs :
    		1.  informs student and suggests trying again later.
		B. At any time, student does not have selected courses :
			1.  inform student that there is no schedule available.
	}
}

As a student, I want to check my grades for a certain course, so that I can know whether my credits meet graduation requirements {
	Basic Flow {
    	(User) 1. the student shall log in to system.
		(User) 2. the student shall select courses for a given semester.
		(User) 3. the student shall check their grades for a course they have chosen.
		(System) 4. the system shall display grades of students in corresponding courses. (functional)
	}
}


As a student, I want to view my class schedule, so that I can manage my time efficiently {
	Basic Flow {
    	(User) 1. the student shall log in to the system.
    	(User) 2. the student shall review his own schedule.
    	(User) 3. the student shall use options to filter The schedule for The corresponding time.
    	(System) 4. the system shall displays course schedule. (functional)
	}
	Alternative Flow {
		A. At any time, The system is temporarily unavailable error occurs :
    		1.  informs student and suggests trying again later.
		B. At any time, student does not have selected courses :
			1.  inform student that there is no schedule available.
	}
}

As a student, I want to subscribe to updates on important school events, so that I can receive important notices from The school immediately {
	Basic Flow {
		(User) 1. the student shall set up subscriptions in their personal preferences.
		(System) 2. When a new notification is added by teacher or administrator, the system shall send notifications to student. (functional)
	}
}

As a teacher, I want to subscribe to updates on important school events, so that I can receive important notices from The school immediately {
	Basic Flow {
		(User) 1. the teacher shall set up subscriptions in their personal preferences.
		(System) 2. When a new notification is added by administrator, the system shall send notifications to teacher. (functional)
	}
}

As a administrator, I want to publish a subscription to important information about The school, so that students and teachers can receive important notifications {
	Basic Flow {
		(User) 1. the administrator shall publish subscription information.
    	(System) 2. When a new notification is added, the system shall check whether The current user have permessions. (functional)
		(System) 3. When a new notification is added by administrator, the system shall send notifications to teacher and students. (functional)
	}
}


As a administrator, I want to add new student records {
	Basic Flow {
    	(User) 1. the administrator shall enters student id.
    	(User) 2. the administrator shall enters student sex.
    	(User) 3. the administrator shall enters student name.
    	(User) 4. the administrator shall enters student email and phone.
    	(System) 5. When add new student, the system shall check whether The current user have permessions. (functional)
    	(System) 6. When add new student, the system shall check whether id is existed. (functional)
    	(System) 7. When add new student, the system shall stores new student record in database for future reference. (functional)
	}
	Alternative Flow {
		A. At any time, entered information is incomplete or error :
			1.  displays an error message and prompts user to provide missing data.
		B. At any time, student id is existed :
			2.  displays an error messgae and prompts user to check data.
	}
}


As a administrator, I want to manage user permissions, so that system maintains data security {
	Basic Flow {
		(User) 1. The administrator shall select user management section.
		(User) 2. The administrator shall select a user.
		(User) 3. The administrator shall edit user permissions.
		(System) 4. When change user permessions, the system shall check whether The current user have permessions. (non functional)
		(System) 5. When change user permessions, the system shall updates user permissions settings accordingly. (functional)
	}
}

As a administrator, I want to modify student records {
	Basic Flow {
		(User) 1. the administrator shall log in to system.
		(User) 2. the administrator shall selects option to edit a student record.
		(User) 3. the administrator shall makes necessary changes to student details.
		(System) 4. When edit student records, the system shall check whether The current user have permessions. (non functional)
		(System) 5. When edit student records, the system shall updates student record. (functional)
	}
}

As a teacher, I want to view student records, so that I can care about their personal situation {
	Basic Flow {
		(User) 1. The teacher shall log into system.
		(User) 2. The teacher shall searches for a specific student by name or ID.
		(User) 3. The teacher shall select a student profile.
		(System) 4. When update student grades, the system shall check whether The current user have permessions. (non functional)
		(System) 5. When select a student, the system shall display student information. (functional)
	}
}

As a teacher, I want to update student grades {
	Basic Flow {
		(User) 1. the teacher shall select a course.
		(User) 2. the teacher shall select a student.
		(User) 3. the teacher shall enters updated grade for that course.
		(System) 4. When update student grades, the system shall check whether The current user have permessions. (non functional)
		(System) 5. When update student grades, the system shall check grade is valid. (functional)
		(System) 6. When update student grades, the system shall modify this student record in database. (functional)
	} Alternative Flow {
		A. At any time, entered grade is invalid :
			1. notifies teacher and requests a valid grade.
    }
}

As a administrator, I want to delete student records {
	Basic Flow {
		(User) 1. The administrator shall log in to system.
		(User) 2. The administrator shall select The student information he want to delete.
		(User) 3. The administrator shall confirm delete operation.
		(System) 4. When delete student, the system shall check whether The current user have permessions. (non functional)
		(System) 4. When detele student, the system shall removes this student record from database. (functional)
	}
}

