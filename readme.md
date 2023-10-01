# Домашнее задание к занятию «Qt Designer»

### Цель задания

Вам предстоит создать форму ввода данных, для подключения к базе данных.
В результате выполнения этого задания вы научитесь создавать простую форму в Qt Designer, создавать диалоговое окно, работать с компоновкой и виджетами!

------

### Инструкция к заданию

1. Создайте новый проект — приложение Qt Widgets.
2. В новом проекте создайте диалоговое окно.
3. Добавьте необходимые виджеты на форму диалогового окна.
3. Скомпонуйте виджеты.

### Задание

Создайте далоговую форму, которая позволит пользователям вводить необходимые данные для подключения к БД:
* Имя хоста, формат QString
* Имя БД, формат QString
* Логин, формат QString
* Пароль, формат QString
* Прот подключения к БД, формант uint
------

### Правила приёма работы

* Отправлена ссылка на репозиторий с кодом ДЗ.

------

### Критерии зачёта

1. Созданы все поля с возможностью ввода данных.
2. Созданы 2 кнопки (Ок/Отмена)
3. Все поля и кнопки скомпанованы, отсутствуют нескомпонованные виджеты или компановки.
4. У всех полей на форме присутствуют названия
5. Форма эргономична.

### Дополнительное задание
1. Создайте в главном окне кнопку, по нажатию на которую будет открываться диалоговое окно.

#### Рекомендуемые виджеты
Для ввода QString рекомендуется использовать LineEdit
Для ввода uint SpinBox
Для названия полей label