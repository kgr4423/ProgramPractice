from sklearn import datasets, model_selection, svm, metrics

digits = datasets.load_digits()

data_train, data_test, label_train, label_test = \
    model_selection.train_test_split(digits.data, digits.target)

clf = svm.SVC(gamma=0.001)
clf.fit(data_train, label_train)

predict = clf.predict(data_test)

as_score = metrics.accuracy_score(label_test, predict)
cl_report = metrics.classification_report(label_test, predict)
print("分類器の情報＝", clf)
print("正解率＝", as_score)
print("レポート＝\n", cl_report)
