/* Copyright 2013 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "data/instancemodel.h"
#include "data/loginresponse.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	
	void closeEvent(QCloseEvent *event);

    // Browser Dialog
    void openWebPage(QUrl url);
	
private slots:
	void on_actionAbout_triggered();
	
	void on_actionAddInstance_triggered();
	
	void on_actionViewInstanceFolder_triggered();
	
	void on_actionRefresh_triggered();
	
	void on_actionViewCentralModsFolder_triggered();
	
	void on_actionCheckUpdate_triggered();
	
	void on_actionSettings_triggered();
	
	void on_actionReportBug_triggered();
	
	void on_actionNews_triggered();
	
	void on_mainToolBar_visibilityChanged(bool);
	
	void on_instanceView_customContextMenuRequested(const QPoint &pos);
	
	void on_actionLaunchInstance_triggered();
	
	
	void doLogin(const QString& errorMsg = "");
	
	
	void onLoginComplete(LoginResponse response);
	
private:
	Ui::MainWindow *ui;
	
	InstanceModel instList;
};

#endif // MAINWINDOW_H
