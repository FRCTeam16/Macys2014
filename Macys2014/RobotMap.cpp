// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
AnalogChannel* RobotMap::driveTrainFrontLeftPos = NULL;
SpeedController* RobotMap::driveTrainFrontLeftSteer = NULL;
PIDController* RobotMap::driveTrainFrontLeft = NULL;
AnalogChannel* RobotMap::driveTrainFrontRightPos = NULL;
SpeedController* RobotMap::driveTrainFrontRightSteer = NULL;
PIDController* RobotMap::driveTrainFrontRight = NULL;
AnalogChannel* RobotMap::driveTrainRearLeftPos = NULL;
SpeedController* RobotMap::driveTrainRearLeftSteer = NULL;
PIDController* RobotMap::driveTrainRearLeft = NULL;
AnalogChannel* RobotMap::driveTrainRearRightPos = NULL;
SpeedController* RobotMap::driveTrainRearRightSteer = NULL;
PIDController* RobotMap::driveTrainRearRight = NULL;
Gyro* RobotMap::driveTrainGyro = NULL;
SpeedController* RobotMap::driveTrainFrontLeftDrive = NULL;
SpeedController* RobotMap::driveTrainFrontRightDrive = NULL;
SpeedController* RobotMap::driveTrainRearLeftDrive = NULL;
SpeedController* RobotMap::driveTrainRearRightDrive = NULL;
Compressor* RobotMap::shooterComp = NULL;
Solenoid* RobotMap::shooterFireLeft = NULL;
Solenoid* RobotMap::shooterFireRight = NULL;
Solenoid* RobotMap::shooterLeftArm = NULL;
Solenoid* RobotMap::shooterRightArm = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	driveTrainFrontLeftPos = new AnalogChannel(1, 2);
	lw->AddSensor("DriveTrain", "FrontLeftPos", driveTrainFrontLeftPos);
	
	driveTrainFrontLeftSteer = new Jaguar(1, 5);
	lw->AddActuator("DriveTrain", "FrontLeftSteer", (Jaguar*) driveTrainFrontLeftSteer);
	
	driveTrainFrontLeft = new PIDController(1.0, 0.0, 0.0,/* F: 0.0, */ driveTrainFrontLeftPos, driveTrainFrontLeftSteer, 0.02);
	lw->AddActuator("DriveTrain", "FrontLeft", driveTrainFrontLeft);
	driveTrainFrontLeft->SetContinuous(false); driveTrainFrontLeft->SetAbsoluteTolerance(0.2); 
        driveTrainFrontLeft->SetOutputRange(-1.0, 1.0);
	driveTrainFrontRightPos = new AnalogChannel(1, 3);
	lw->AddSensor("DriveTrain", "FrontRightPos", driveTrainFrontRightPos);
	
	driveTrainFrontRightSteer = new Jaguar(1, 6);
	lw->AddActuator("DriveTrain", "FrontRightSteer", (Jaguar*) driveTrainFrontRightSteer);
	
	driveTrainFrontRight = new PIDController(1.0, 0.0, 0.0,/* F: 0.0, */ driveTrainFrontRightPos, driveTrainFrontRightSteer, 0.02);
	lw->AddActuator("DriveTrain", "FrontRight", driveTrainFrontRight);
	driveTrainFrontRight->SetContinuous(false); driveTrainFrontRight->SetAbsoluteTolerance(0.2); 
        driveTrainFrontRight->SetOutputRange(-1.0, 1.0);
	driveTrainRearLeftPos = new AnalogChannel(1, 4);
	lw->AddSensor("DriveTrain", "RearLeftPos", driveTrainRearLeftPos);
	
	driveTrainRearLeftSteer = new Jaguar(1, 7);
	lw->AddActuator("DriveTrain", "RearLeftSteer", (Jaguar*) driveTrainRearLeftSteer);
	
	driveTrainRearLeft = new PIDController(1.0, 0.0, 0.0,/* F: 0.0, */ driveTrainRearLeftPos, driveTrainRearLeftSteer, 0.02);
	lw->AddActuator("DriveTrain", "RearLeft", driveTrainRearLeft);
	driveTrainRearLeft->SetContinuous(false); driveTrainRearLeft->SetAbsoluteTolerance(0.2); 
        driveTrainRearLeft->SetOutputRange(-1.0, 1.0);
	driveTrainRearRightPos = new AnalogChannel(1, 5);
	lw->AddSensor("DriveTrain", "RearRightPos", driveTrainRearRightPos);
	
	driveTrainRearRightSteer = new Jaguar(1, 8);
	lw->AddActuator("DriveTrain", "RearRightSteer", (Jaguar*) driveTrainRearRightSteer);
	
	driveTrainRearRight = new PIDController(1.0, 0.0, 0.0,/* F: 0.0, */ driveTrainRearRightPos, driveTrainRearRightSteer, 0.02);
	lw->AddActuator("DriveTrain", "RearRight", driveTrainRearRight);
	driveTrainRearRight->SetContinuous(false); driveTrainRearRight->SetAbsoluteTolerance(0.2); 
        driveTrainRearRight->SetOutputRange(-1.0, 1.0);
	driveTrainGyro = new Gyro(1, 1);
	lw->AddSensor("DriveTrain", "Gyro", driveTrainGyro);
	driveTrainGyro->SetSensitivity(0.007);
	driveTrainFrontLeftDrive = new Talon(1, 1);
	lw->AddActuator("DriveTrain", "FrontLeftDrive", (Talon*) driveTrainFrontLeftDrive);
	
	driveTrainFrontRightDrive = new Talon(1, 2);
	lw->AddActuator("DriveTrain", "FrontRightDrive", (Talon*) driveTrainFrontRightDrive);
	
	driveTrainRearLeftDrive = new Jaguar(1, 3);
	lw->AddActuator("DriveTrain", "RearLeftDrive", (Jaguar*) driveTrainRearLeftDrive);
	
	driveTrainRearRightDrive = new Jaguar(1, 4);
	lw->AddActuator("DriveTrain", "RearRightDrive", (Jaguar*) driveTrainRearRightDrive);
	
	shooterComp = new Compressor(1, 1, 1, 1);
	
	
	shooterFireLeft = new Solenoid(1, 1);
	lw->AddActuator("Shooter", "FireLeft", shooterFireLeft);
	
	shooterFireRight = new Solenoid(1, 2);
	lw->AddActuator("Shooter", "FireRight", shooterFireRight);
	
	shooterLeftArm = new Solenoid(1, 3);
	lw->AddActuator("Shooter", "LeftArm", shooterLeftArm);
	
	shooterRightArm = new Solenoid(1, 4);
	lw->AddActuator("Shooter", "RightArm", shooterRightArm);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	driveTrainFrontLeftPos->SetVoltageForPID(true);
	driveTrainFrontRightPos->SetVoltageForPID(true);
	driveTrainRearLeftPos->SetVoltageForPID(true);
	driveTrainRearRightPos->SetVoltageForPID(true);
}
