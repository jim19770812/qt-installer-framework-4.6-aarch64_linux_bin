/****************************************************************************
** Meta object code from reading C++ file 'packagemanagercore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/packagemanagercore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packagemanagercore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__PackageManagerCore_t {
    QByteArrayData data[189];
    char stringdata0[3333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__PackageManagerCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__PackageManagerCore_t qt_meta_stringdata_QInstaller__PackageManagerCore = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QInstaller::PackageManagerCore"
QT_MOC_LITERAL(1, 31, 33), // "aboutCalculateComponentsToIns..."
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 36), // "finishedCalculateComponentsTo..."
QT_MOC_LITERAL(4, 103, 35), // "aboutCalculateComponentsToUni..."
QT_MOC_LITERAL(5, 139, 38), // "finishedCalculateComponentsTo..."
QT_MOC_LITERAL(6, 178, 14), // "componentAdded"
QT_MOC_LITERAL(7, 193, 22), // "QInstaller::Component*"
QT_MOC_LITERAL(8, 216, 4), // "comp"
QT_MOC_LITERAL(9, 221, 19), // "rootComponentsAdded"
QT_MOC_LITERAL(10, 241, 29), // "QList<QInstaller::Component*>"
QT_MOC_LITERAL(11, 271, 10), // "components"
QT_MOC_LITERAL(12, 282, 22), // "updaterComponentsAdded"
QT_MOC_LITERAL(13, 305, 12), // "valueChanged"
QT_MOC_LITERAL(14, 318, 3), // "key"
QT_MOC_LITERAL(15, 322, 5), // "value"
QT_MOC_LITERAL(16, 328, 13), // "statusChanged"
QT_MOC_LITERAL(17, 342, 38), // "QInstaller::PackageManagerCor..."
QT_MOC_LITERAL(18, 381, 36), // "defaultTranslationsLoadedForL..."
QT_MOC_LITERAL(19, 418, 17), // "QLocale::Language"
QT_MOC_LITERAL(20, 436, 4), // "lang"
QT_MOC_LITERAL(21, 441, 18), // "currentPageChanged"
QT_MOC_LITERAL(22, 460, 4), // "page"
QT_MOC_LITERAL(23, 465, 19), // "finishButtonClicked"
QT_MOC_LITERAL(24, 485, 15), // "metaJobProgress"
QT_MOC_LITERAL(25, 501, 8), // "progress"
QT_MOC_LITERAL(26, 510, 20), // "metaJobTotalProgress"
QT_MOC_LITERAL(27, 531, 18), // "metaJobInfoMessage"
QT_MOC_LITERAL(28, 550, 7), // "message"
QT_MOC_LITERAL(29, 558, 23), // "startAllComponentsReset"
QT_MOC_LITERAL(30, 582, 24), // "finishAllComponentsReset"
QT_MOC_LITERAL(31, 607, 14), // "rootComponents"
QT_MOC_LITERAL(32, 622, 27), // "startUpdaterComponentsReset"
QT_MOC_LITERAL(33, 650, 28), // "finishUpdaterComponentsReset"
QT_MOC_LITERAL(34, 679, 21), // "componentsWithUpdates"
QT_MOC_LITERAL(35, 701, 19), // "installationStarted"
QT_MOC_LITERAL(36, 721, 23), // "installationInterrupted"
QT_MOC_LITERAL(37, 745, 20), // "installationFinished"
QT_MOC_LITERAL(38, 766, 14), // "updateFinished"
QT_MOC_LITERAL(39, 781, 21), // "uninstallationStarted"
QT_MOC_LITERAL(40, 803, 22), // "uninstallationFinished"
QT_MOC_LITERAL(41, 826, 24), // "offlineGenerationStarted"
QT_MOC_LITERAL(42, 851, 25), // "offlineGenerationFinished"
QT_MOC_LITERAL(43, 877, 19), // "titleMessageChanged"
QT_MOC_LITERAL(44, 897, 5), // "title"
QT_MOC_LITERAL(45, 903, 24), // "downloadArchivesFinished"
QT_MOC_LITERAL(46, 928, 28), // "wizardPageInsertionRequested"
QT_MOC_LITERAL(47, 957, 8), // "QWidget*"
QT_MOC_LITERAL(48, 966, 6), // "widget"
QT_MOC_LITERAL(49, 973, 42), // "QInstaller::PackageManagerCor..."
QT_MOC_LITERAL(50, 1016, 26), // "wizardPageRemovalRequested"
QT_MOC_LITERAL(51, 1043, 30), // "wizardWidgetInsertionRequested"
QT_MOC_LITERAL(52, 1074, 8), // "position"
QT_MOC_LITERAL(53, 1083, 28), // "wizardWidgetRemovalRequested"
QT_MOC_LITERAL(54, 1112, 35), // "wizardPageVisibilityChangeReq..."
QT_MOC_LITERAL(55, 1148, 7), // "visible"
QT_MOC_LITERAL(56, 1156, 34), // "setValidatorForCustomPageRequ..."
QT_MOC_LITERAL(57, 1191, 9), // "component"
QT_MOC_LITERAL(58, 1201, 4), // "name"
QT_MOC_LITERAL(59, 1206, 12), // "callbackName"
QT_MOC_LITERAL(60, 1219, 29), // "setAutomatedPageSwitchEnabled"
QT_MOC_LITERAL(61, 1249, 7), // "request"
QT_MOC_LITERAL(62, 1257, 26), // "coreNetworkSettingsChanged"
QT_MOC_LITERAL(63, 1284, 16), // "guiObjectChanged"
QT_MOC_LITERAL(64, 1301, 3), // "gui"
QT_MOC_LITERAL(65, 1305, 22), // "unstableComponentFound"
QT_MOC_LITERAL(66, 1328, 4), // "type"
QT_MOC_LITERAL(67, 1333, 12), // "errorMessage"
QT_MOC_LITERAL(68, 1346, 28), // "installerBinaryMarkerChanged"
QT_MOC_LITERAL(69, 1375, 11), // "magicMarker"
QT_MOC_LITERAL(70, 1387, 22), // "componentsRecalculated"
QT_MOC_LITERAL(71, 1410, 12), // "runInstaller"
QT_MOC_LITERAL(72, 1423, 14), // "runUninstaller"
QT_MOC_LITERAL(73, 1438, 17), // "runPackageUpdater"
QT_MOC_LITERAL(74, 1456, 19), // "runOfflineGenerator"
QT_MOC_LITERAL(75, 1476, 9), // "interrupt"
QT_MOC_LITERAL(76, 1486, 11), // "setCanceled"
QT_MOC_LITERAL(77, 1498, 15), // "languageChanged"
QT_MOC_LITERAL(78, 1514, 25), // "setCompleteUninstallation"
QT_MOC_LITERAL(79, 1540, 8), // "complete"
QT_MOC_LITERAL(80, 1549, 17), // "cancelMetaInfoJob"
QT_MOC_LITERAL(81, 1567, 37), // "componentsToInstallNeedsRecal..."
QT_MOC_LITERAL(82, 1605, 34), // "clearComponentsToInstallCalcu..."
QT_MOC_LITERAL(83, 1640, 32), // "setDependsOnLocalInstallerBinary"
QT_MOC_LITERAL(84, 1673, 24), // "localInstallerBinaryUsed"
QT_MOC_LITERAL(85, 1698, 7), // "execute"
QT_MOC_LITERAL(86, 1706, 7), // "program"
QT_MOC_LITERAL(87, 1714, 9), // "arguments"
QT_MOC_LITERAL(88, 1724, 5), // "stdIn"
QT_MOC_LITERAL(89, 1730, 10), // "stdInCodec"
QT_MOC_LITERAL(90, 1741, 11), // "stdOutCodec"
QT_MOC_LITERAL(91, 1753, 15), // "executeDetached"
QT_MOC_LITERAL(92, 1769, 16), // "workingDirectory"
QT_MOC_LITERAL(93, 1786, 19), // "environmentVariable"
QT_MOC_LITERAL(94, 1806, 15), // "operationExists"
QT_MOC_LITERAL(95, 1822, 16), // "performOperation"
QT_MOC_LITERAL(96, 1839, 14), // "versionMatches"
QT_MOC_LITERAL(97, 1854, 7), // "version"
QT_MOC_LITERAL(98, 1862, 11), // "requirement"
QT_MOC_LITERAL(99, 1874, 11), // "findLibrary"
QT_MOC_LITERAL(100, 1886, 5), // "paths"
QT_MOC_LITERAL(101, 1892, 8), // "findPath"
QT_MOC_LITERAL(102, 1901, 22), // "setInstallerBaseBinary"
QT_MOC_LITERAL(103, 1924, 4), // "path"
QT_MOC_LITERAL(104, 1929, 13), // "containsValue"
QT_MOC_LITERAL(105, 1943, 8), // "setValue"
QT_MOC_LITERAL(106, 1952, 12), // "defaultValue"
QT_MOC_LITERAL(107, 1965, 6), // "format"
QT_MOC_LITERAL(108, 1972, 6), // "values"
QT_MOC_LITERAL(109, 1979, 19), // "addUserRepositories"
QT_MOC_LITERAL(110, 1999, 12), // "repositories"
QT_MOC_LITERAL(111, 2012, 24), // "setTemporaryRepositories"
QT_MOC_LITERAL(112, 2037, 7), // "replace"
QT_MOC_LITERAL(113, 2045, 10), // "compressed"
QT_MOC_LITERAL(114, 2056, 22), // "autoAcceptMessageBoxes"
QT_MOC_LITERAL(115, 2079, 22), // "autoRejectMessageBoxes"
QT_MOC_LITERAL(116, 2102, 28), // "setMessageBoxAutomaticAnswer"
QT_MOC_LITERAL(117, 2131, 10), // "identifier"
QT_MOC_LITERAL(118, 2142, 6), // "button"
QT_MOC_LITERAL(119, 2149, 29), // "acceptMessageBoxDefaultButton"
QT_MOC_LITERAL(120, 2179, 21), // "setAutoAcceptLicenses"
QT_MOC_LITERAL(121, 2201, 28), // "setFileDialogAutomaticAnswer"
QT_MOC_LITERAL(122, 2230, 31), // "removeFileDialogAutomaticAnswer"
QT_MOC_LITERAL(123, 2262, 33), // "containsFileDialogAutomaticAn..."
QT_MOC_LITERAL(124, 2296, 25), // "isFileExtensionRegistered"
QT_MOC_LITERAL(125, 2322, 9), // "extension"
QT_MOC_LITERAL(126, 2332, 10), // "fileExists"
QT_MOC_LITERAL(127, 2343, 8), // "filePath"
QT_MOC_LITERAL(128, 2352, 8), // "readFile"
QT_MOC_LITERAL(129, 2361, 9), // "codecName"
QT_MOC_LITERAL(130, 2371, 15), // "readConsoleLine"
QT_MOC_LITERAL(131, 2387, 6), // "maxlen"
QT_MOC_LITERAL(132, 2394, 18), // "toNativeSeparators"
QT_MOC_LITERAL(133, 2413, 20), // "fromNativeSeparators"
QT_MOC_LITERAL(134, 2434, 28), // "calculateComponentsToInstall"
QT_MOC_LITERAL(135, 2463, 24), // "recalculateAllComponents"
QT_MOC_LITERAL(136, 2488, 30), // "calculateComponentsToUninstall"
QT_MOC_LITERAL(137, 2519, 12), // "setInstaller"
QT_MOC_LITERAL(138, 2532, 11), // "isInstaller"
QT_MOC_LITERAL(139, 2544, 13), // "isOfflineOnly"
QT_MOC_LITERAL(140, 2558, 14), // "setUninstaller"
QT_MOC_LITERAL(141, 2573, 13), // "isUninstaller"
QT_MOC_LITERAL(142, 2587, 10), // "setUpdater"
QT_MOC_LITERAL(143, 2598, 9), // "isUpdater"
QT_MOC_LITERAL(144, 2608, 17), // "setPackageManager"
QT_MOC_LITERAL(145, 2626, 16), // "isPackageManager"
QT_MOC_LITERAL(146, 2643, 18), // "isOfflineGenerator"
QT_MOC_LITERAL(147, 2662, 15), // "isPackageViewer"
QT_MOC_LITERAL(148, 2678, 21), // "isUserSetBinaryMarker"
QT_MOC_LITERAL(149, 2700, 21), // "isCommandLineInstance"
QT_MOC_LITERAL(150, 2722, 27), // "isCommandLineDefaultInstall"
QT_MOC_LITERAL(151, 2750, 15), // "gainAdminRights"
QT_MOC_LITERAL(152, 2766, 15), // "dropAdminRights"
QT_MOC_LITERAL(153, 2782, 17), // "requiredDiskSpace"
QT_MOC_LITERAL(154, 2800, 26), // "requiredTemporaryDiskSpace"
QT_MOC_LITERAL(155, 2827, 16), // "isProcessRunning"
QT_MOC_LITERAL(156, 2844, 11), // "killProcess"
QT_MOC_LITERAL(157, 2856, 16), // "absoluteFilePath"
QT_MOC_LITERAL(158, 2873, 26), // "setAllowedRunningProcesses"
QT_MOC_LITERAL(159, 2900, 9), // "processes"
QT_MOC_LITERAL(160, 2910, 23), // "allowedRunningProcesses"
QT_MOC_LITERAL(161, 2934, 13), // "addWizardPage"
QT_MOC_LITERAL(162, 2948, 16), // "removeWizardPage"
QT_MOC_LITERAL(163, 2965, 17), // "addWizardPageItem"
QT_MOC_LITERAL(164, 2983, 20), // "removeWizardPageItem"
QT_MOC_LITERAL(165, 3004, 21), // "setDefaultPageVisible"
QT_MOC_LITERAL(166, 3026, 25), // "setValidatorForCustomPage"
QT_MOC_LITERAL(167, 3052, 15), // "selectComponent"
QT_MOC_LITERAL(168, 3068, 2), // "id"
QT_MOC_LITERAL(169, 3071, 17), // "deselectComponent"
QT_MOC_LITERAL(170, 3089, 6), // "status"
QT_MOC_LITERAL(171, 3096, 6), // "Status"
QT_MOC_LITERAL(172, 3103, 7), // "Success"
QT_MOC_LITERAL(173, 3111, 7), // "Failure"
QT_MOC_LITERAL(174, 3119, 7), // "Running"
QT_MOC_LITERAL(175, 3127, 8), // "Canceled"
QT_MOC_LITERAL(176, 3136, 10), // "Unfinished"
QT_MOC_LITERAL(177, 3147, 11), // "ForceUpdate"
QT_MOC_LITERAL(178, 3159, 16), // "EssentialUpdated"
QT_MOC_LITERAL(179, 3176, 10), // "WizardPage"
QT_MOC_LITERAL(180, 3187, 12), // "Introduction"
QT_MOC_LITERAL(181, 3200, 15), // "TargetDirectory"
QT_MOC_LITERAL(182, 3216, 18), // "ComponentSelection"
QT_MOC_LITERAL(183, 3235, 12), // "LicenseCheck"
QT_MOC_LITERAL(184, 3248, 18), // "StartMenuSelection"
QT_MOC_LITERAL(185, 3267, 20), // "ReadyForInstallation"
QT_MOC_LITERAL(186, 3288, 19), // "PerformInstallation"
QT_MOC_LITERAL(187, 3308, 20), // "InstallationFinished"
QT_MOC_LITERAL(188, 3329, 3) // "End"

    },
    "QInstaller::PackageManagerCore\0"
    "aboutCalculateComponentsToInstall\0\0"
    "finishedCalculateComponentsToInstall\0"
    "aboutCalculateComponentsToUninstall\0"
    "finishedCalculateComponentsToUninstall\0"
    "componentAdded\0QInstaller::Component*\0"
    "comp\0rootComponentsAdded\0"
    "QList<QInstaller::Component*>\0components\0"
    "updaterComponentsAdded\0valueChanged\0"
    "key\0value\0statusChanged\0"
    "QInstaller::PackageManagerCore::Status\0"
    "defaultTranslationsLoadedForLanguage\0"
    "QLocale::Language\0lang\0currentPageChanged\0"
    "page\0finishButtonClicked\0metaJobProgress\0"
    "progress\0metaJobTotalProgress\0"
    "metaJobInfoMessage\0message\0"
    "startAllComponentsReset\0"
    "finishAllComponentsReset\0rootComponents\0"
    "startUpdaterComponentsReset\0"
    "finishUpdaterComponentsReset\0"
    "componentsWithUpdates\0installationStarted\0"
    "installationInterrupted\0installationFinished\0"
    "updateFinished\0uninstallationStarted\0"
    "uninstallationFinished\0offlineGenerationStarted\0"
    "offlineGenerationFinished\0titleMessageChanged\0"
    "title\0downloadArchivesFinished\0"
    "wizardPageInsertionRequested\0QWidget*\0"
    "widget\0QInstaller::PackageManagerCore::WizardPage\0"
    "wizardPageRemovalRequested\0"
    "wizardWidgetInsertionRequested\0position\0"
    "wizardWidgetRemovalRequested\0"
    "wizardPageVisibilityChangeRequested\0"
    "visible\0setValidatorForCustomPageRequested\0"
    "component\0name\0callbackName\0"
    "setAutomatedPageSwitchEnabled\0request\0"
    "coreNetworkSettingsChanged\0guiObjectChanged\0"
    "gui\0unstableComponentFound\0type\0"
    "errorMessage\0installerBinaryMarkerChanged\0"
    "magicMarker\0componentsRecalculated\0"
    "runInstaller\0runUninstaller\0"
    "runPackageUpdater\0runOfflineGenerator\0"
    "interrupt\0setCanceled\0languageChanged\0"
    "setCompleteUninstallation\0complete\0"
    "cancelMetaInfoJob\0"
    "componentsToInstallNeedsRecalculation\0"
    "clearComponentsToInstallCalculated\0"
    "setDependsOnLocalInstallerBinary\0"
    "localInstallerBinaryUsed\0execute\0"
    "program\0arguments\0stdIn\0stdInCodec\0"
    "stdOutCodec\0executeDetached\0"
    "workingDirectory\0environmentVariable\0"
    "operationExists\0performOperation\0"
    "versionMatches\0version\0requirement\0"
    "findLibrary\0paths\0findPath\0"
    "setInstallerBaseBinary\0path\0containsValue\0"
    "setValue\0defaultValue\0format\0values\0"
    "addUserRepositories\0repositories\0"
    "setTemporaryRepositories\0replace\0"
    "compressed\0autoAcceptMessageBoxes\0"
    "autoRejectMessageBoxes\0"
    "setMessageBoxAutomaticAnswer\0identifier\0"
    "button\0acceptMessageBoxDefaultButton\0"
    "setAutoAcceptLicenses\0"
    "setFileDialogAutomaticAnswer\0"
    "removeFileDialogAutomaticAnswer\0"
    "containsFileDialogAutomaticAnswer\0"
    "isFileExtensionRegistered\0extension\0"
    "fileExists\0filePath\0readFile\0codecName\0"
    "readConsoleLine\0maxlen\0toNativeSeparators\0"
    "fromNativeSeparators\0calculateComponentsToInstall\0"
    "recalculateAllComponents\0"
    "calculateComponentsToUninstall\0"
    "setInstaller\0isInstaller\0isOfflineOnly\0"
    "setUninstaller\0isUninstaller\0setUpdater\0"
    "isUpdater\0setPackageManager\0"
    "isPackageManager\0isOfflineGenerator\0"
    "isPackageViewer\0isUserSetBinaryMarker\0"
    "isCommandLineInstance\0isCommandLineDefaultInstall\0"
    "gainAdminRights\0dropAdminRights\0"
    "requiredDiskSpace\0requiredTemporaryDiskSpace\0"
    "isProcessRunning\0killProcess\0"
    "absoluteFilePath\0setAllowedRunningProcesses\0"
    "processes\0allowedRunningProcesses\0"
    "addWizardPage\0removeWizardPage\0"
    "addWizardPageItem\0removeWizardPageItem\0"
    "setDefaultPageVisible\0setValidatorForCustomPage\0"
    "selectComponent\0id\0deselectComponent\0"
    "status\0Status\0Success\0Failure\0Running\0"
    "Canceled\0Unfinished\0ForceUpdate\0"
    "EssentialUpdated\0WizardPage\0Introduction\0"
    "TargetDirectory\0ComponentSelection\0"
    "LicenseCheck\0StartMenuSelection\0"
    "ReadyForInstallation\0PerformInstallation\0"
    "InstallationFinished\0End"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__PackageManagerCore[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     133,   14, // methods
       1, 1064, // properties
       2, 1068, // enums/sets
       0,    0, // constructors
       0,       // flags
      41,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  679,    2, 0x06 /* Public */,
       3,    0,  680,    2, 0x06 /* Public */,
       4,    0,  681,    2, 0x06 /* Public */,
       5,    0,  682,    2, 0x06 /* Public */,
       6,    1,  683,    2, 0x06 /* Public */,
       9,    1,  686,    2, 0x06 /* Public */,
      12,    1,  689,    2, 0x06 /* Public */,
      13,    2,  692,    2, 0x06 /* Public */,
      16,    1,  697,    2, 0x06 /* Public */,
      18,    1,  700,    2, 0x06 /* Public */,
      21,    1,  703,    2, 0x06 /* Public */,
      23,    0,  706,    2, 0x06 /* Public */,
      24,    1,  707,    2, 0x06 /* Public */,
      26,    1,  710,    2, 0x06 /* Public */,
      27,    1,  713,    2, 0x06 /* Public */,
      29,    0,  716,    2, 0x06 /* Public */,
      30,    1,  717,    2, 0x06 /* Public */,
      32,    0,  720,    2, 0x06 /* Public */,
      33,    1,  721,    2, 0x06 /* Public */,
      35,    0,  724,    2, 0x06 /* Public */,
      36,    0,  725,    2, 0x06 /* Public */,
      37,    0,  726,    2, 0x06 /* Public */,
      38,    0,  727,    2, 0x06 /* Public */,
      39,    0,  728,    2, 0x06 /* Public */,
      40,    0,  729,    2, 0x06 /* Public */,
      41,    0,  730,    2, 0x06 /* Public */,
      42,    0,  731,    2, 0x06 /* Public */,
      43,    1,  732,    2, 0x06 /* Public */,
      45,    0,  735,    2, 0x06 /* Public */,
      46,    2,  736,    2, 0x06 /* Public */,
      50,    1,  741,    2, 0x06 /* Public */,
      51,    3,  744,    2, 0x06 /* Public */,
      53,    1,  751,    2, 0x06 /* Public */,
      54,    2,  754,    2, 0x06 /* Public */,
      56,    3,  759,    2, 0x06 /* Public */,
      60,    1,  766,    2, 0x06 /* Public */,
      62,    0,  769,    2, 0x06 /* Public */,
      63,    1,  770,    2, 0x06 /* Public */,
      65,    3,  773,    2, 0x06 /* Public */,
      68,    1,  780,    2, 0x06 /* Public */,
      70,    0,  783,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      71,    0,  784,    2, 0x0a /* Public */,
      72,    0,  785,    2, 0x0a /* Public */,
      73,    0,  786,    2, 0x0a /* Public */,
      74,    0,  787,    2, 0x0a /* Public */,
      75,    0,  788,    2, 0x0a /* Public */,
      76,    0,  789,    2, 0x0a /* Public */,
      77,    0,  790,    2, 0x0a /* Public */,
      78,    1,  791,    2, 0x0a /* Public */,
      80,    0,  794,    2, 0x0a /* Public */,
      81,    0,  795,    2, 0x0a /* Public */,
      82,    0,  796,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      83,    0,  797,    2, 0x02 /* Public */,
      84,    0,  798,    2, 0x02 /* Public */,
      85,    5,  799,    2, 0x02 /* Public */,
      85,    4,  810,    2, 0x22 /* Public | MethodCloned */,
      85,    3,  819,    2, 0x22 /* Public | MethodCloned */,
      85,    2,  826,    2, 0x22 /* Public | MethodCloned */,
      85,    1,  831,    2, 0x22 /* Public | MethodCloned */,
      91,    3,  834,    2, 0x02 /* Public */,
      91,    2,  841,    2, 0x22 /* Public | MethodCloned */,
      91,    1,  846,    2, 0x22 /* Public | MethodCloned */,
      93,    1,  849,    2, 0x02 /* Public */,
      94,    1,  852,    2, 0x02 /* Public */,
      95,    2,  855,    2, 0x02 /* Public */,
      96,    2,  860,    2, 0x02 /* Public */,
      99,    2,  865,    2, 0x02 /* Public */,
      99,    1,  870,    2, 0x22 /* Public | MethodCloned */,
     101,    2,  873,    2, 0x02 /* Public */,
     101,    1,  878,    2, 0x22 /* Public | MethodCloned */,
     102,    1,  881,    2, 0x02 /* Public */,
     104,    1,  884,    2, 0x02 /* Public */,
     105,    2,  887,    2, 0x02 /* Public */,
      15,    3,  892,    2, 0x02 /* Public */,
      15,    2,  899,    2, 0x22 /* Public | MethodCloned */,
      15,    1,  904,    2, 0x22 /* Public | MethodCloned */,
     108,    2,  907,    2, 0x02 /* Public */,
     108,    1,  912,    2, 0x22 /* Public | MethodCloned */,
      14,    1,  915,    2, 0x02 /* Public */,
     109,    1,  918,    2, 0x02 /* Public */,
     111,    3,  921,    2, 0x02 /* Public */,
     111,    2,  928,    2, 0x22 /* Public | MethodCloned */,
     111,    1,  933,    2, 0x22 /* Public | MethodCloned */,
     114,    0,  936,    2, 0x02 /* Public */,
     115,    0,  937,    2, 0x02 /* Public */,
     116,    2,  938,    2, 0x02 /* Public */,
     119,    0,  943,    2, 0x02 /* Public */,
     120,    0,  944,    2, 0x02 /* Public */,
     121,    2,  945,    2, 0x02 /* Public */,
     122,    1,  950,    2, 0x02 /* Public */,
     123,    1,  953,    2, 0x02 /* Public */,
     124,    1,  956,    2, 0x02 /* Public */,
     126,    1,  959,    2, 0x02 /* Public */,
     128,    2,  962,    2, 0x02 /* Public */,
     130,    2,  967,    2, 0x02 /* Public */,
     130,    1,  972,    2, 0x22 /* Public | MethodCloned */,
     130,    0,  975,    2, 0x22 /* Public | MethodCloned */,
     132,    1,  976,    2, 0x02 /* Public */,
     133,    1,  979,    2, 0x02 /* Public */,
     134,    0,  982,    2, 0x02 /* Public */,
     135,    0,  983,    2, 0x02 /* Public */,
     136,    0,  984,    2, 0x02 /* Public */,
     137,    0,  985,    2, 0x02 /* Public */,
     138,    0,  986,    2, 0x02 /* Public */,
     139,    0,  987,    2, 0x02 /* Public */,
     140,    0,  988,    2, 0x02 /* Public */,
     141,    0,  989,    2, 0x02 /* Public */,
     142,    0,  990,    2, 0x02 /* Public */,
     143,    0,  991,    2, 0x02 /* Public */,
     144,    0,  992,    2, 0x02 /* Public */,
     145,    0,  993,    2, 0x02 /* Public */,
     146,    0,  994,    2, 0x02 /* Public */,
     147,    0,  995,    2, 0x02 /* Public */,
     148,    0,  996,    2, 0x02 /* Public */,
     149,    0,  997,    2, 0x02 /* Public */,
     150,    0,  998,    2, 0x02 /* Public */,
     151,    0,  999,    2, 0x02 /* Public */,
     152,    0, 1000,    2, 0x02 /* Public */,
     153,    0, 1001,    2, 0x02 /* Public */,
     154,    0, 1002,    2, 0x02 /* Public */,
     155,    1, 1003,    2, 0x02 /* Public */,
     156,    1, 1006,    2, 0x02 /* Public */,
     158,    1, 1009,    2, 0x02 /* Public */,
     160,    0, 1012,    2, 0x02 /* Public */,
     161,    3, 1013,    2, 0x02 /* Public */,
     162,    2, 1020,    2, 0x02 /* Public */,
     163,    4, 1025,    2, 0x02 /* Public */,
     163,    3, 1034,    2, 0x22 /* Public | MethodCloned */,
     164,    2, 1041,    2, 0x02 /* Public */,
     165,    2, 1046,    2, 0x02 /* Public */,
     166,    3, 1051,    2, 0x02 /* Public */,
     167,    1, 1058,    2, 0x02 /* Public */,
     169,    1, 1061,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 49,   48,   22,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 49, QMetaType::Int,   48,   22,   52,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,   55,   22,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,   57,   58,   59,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   64,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   66,   67,   57,
    QMetaType::Void, QMetaType::LongLong,   69,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   79,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::QVariantList, QMetaType::QString, QMetaType::QStringList, QMetaType::QString, QMetaType::QString, QMetaType::QString,   86,   87,   88,   89,   90,
    QMetaType::QVariantList, QMetaType::QString, QMetaType::QStringList, QMetaType::QString, QMetaType::QString,   86,   87,   88,   89,
    QMetaType::QVariantList, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,   86,   87,   88,
    QMetaType::QVariantList, QMetaType::QString, QMetaType::QStringList,   86,   87,
    QMetaType::QVariantList, QMetaType::QString,   86,
    QMetaType::Bool, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,   86,   87,   92,
    QMetaType::Bool, QMetaType::QString, QMetaType::QStringList,   86,   87,
    QMetaType::Bool, QMetaType::QString,   86,
    QMetaType::QString, QMetaType::QString,   58,
    QMetaType::Bool, QMetaType::QString,   58,
    QMetaType::Bool, QMetaType::QString, QMetaType::QStringList,   58,   87,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   97,   98,
    QMetaType::QString, QMetaType::QString, QMetaType::QStringList,   58,  100,
    QMetaType::QString, QMetaType::QString,   58,
    QMetaType::QString, QMetaType::QString, QMetaType::QStringList,   58,  100,
    QMetaType::QString, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,  103,
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   14,  106,  107,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,  106,
    QMetaType::QString, QMetaType::QString,   14,
    QMetaType::QStringList, QMetaType::QString, QMetaType::QStringList,   14,  106,
    QMetaType::QStringList, QMetaType::QString,   14,
    QMetaType::QString, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QStringList,  110,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool, QMetaType::Bool,  110,  112,  113,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,  110,  112,
    QMetaType::Void, QMetaType::QStringList,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,  117,  118,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  117,   15,
    QMetaType::Void, QMetaType::QString,  117,
    QMetaType::Bool, QMetaType::QString,  117,
    QMetaType::Bool, QMetaType::QString,  125,
    QMetaType::Bool, QMetaType::QString,  127,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,  127,  129,
    QMetaType::QString, QMetaType::QString, QMetaType::LongLong,   44,  131,
    QMetaType::QString, QMetaType::QString,   44,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,  103,
    QMetaType::QString, QMetaType::QString,  103,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::Bool, QMetaType::QString,   58,
    QMetaType::Bool, QMetaType::QString,  157,
    QMetaType::Void, QMetaType::QStringList,  159,
    QMetaType::QStringList,
    QMetaType::Bool, 0x80000000 | 7, QMetaType::QString, QMetaType::Int,   57,   58,   22,
    QMetaType::Bool, 0x80000000 | 7, QMetaType::QString,   57,   58,
    QMetaType::Bool, 0x80000000 | 7, QMetaType::QString, QMetaType::Int, QMetaType::Int,   57,   58,   22,   52,
    QMetaType::Bool, 0x80000000 | 7, QMetaType::QString, QMetaType::Int,   57,   58,   22,
    QMetaType::Bool, 0x80000000 | 7, QMetaType::QString,   57,   58,
    QMetaType::Bool, QMetaType::Int, QMetaType::Bool,   22,   55,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,   57,   58,   59,
    QMetaType::Void, QMetaType::QString,  168,
    QMetaType::Void, QMetaType::QString,  168,

 // properties: name, type, flags
     170, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       8,

 // enums: name, alias, flags, count, data
     171,  171, 0x0,    7, 1078,
     179,  179, 0x0,    9, 1092,

 // enum data: key, value
     172, uint(QInstaller::PackageManagerCore::Success),
     173, uint(QInstaller::PackageManagerCore::Failure),
     174, uint(QInstaller::PackageManagerCore::Running),
     175, uint(QInstaller::PackageManagerCore::Canceled),
     176, uint(QInstaller::PackageManagerCore::Unfinished),
     177, uint(QInstaller::PackageManagerCore::ForceUpdate),
     178, uint(QInstaller::PackageManagerCore::EssentialUpdated),
     180, uint(QInstaller::PackageManagerCore::Introduction),
     181, uint(QInstaller::PackageManagerCore::TargetDirectory),
     182, uint(QInstaller::PackageManagerCore::ComponentSelection),
     183, uint(QInstaller::PackageManagerCore::LicenseCheck),
     184, uint(QInstaller::PackageManagerCore::StartMenuSelection),
     185, uint(QInstaller::PackageManagerCore::ReadyForInstallation),
     186, uint(QInstaller::PackageManagerCore::PerformInstallation),
     187, uint(QInstaller::PackageManagerCore::InstallationFinished),
     188, uint(QInstaller::PackageManagerCore::End),

       0        // eod
};

void QInstaller::PackageManagerCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackageManagerCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutCalculateComponentsToInstall(); break;
        case 1: _t->finishedCalculateComponentsToInstall(); break;
        case 2: _t->aboutCalculateComponentsToUninstall(); break;
        case 3: _t->finishedCalculateComponentsToUninstall(); break;
        case 4: _t->componentAdded((*reinterpret_cast< QInstaller::Component*(*)>(_a[1]))); break;
        case 5: _t->rootComponentsAdded((*reinterpret_cast< QList<QInstaller::Component*>(*)>(_a[1]))); break;
        case 6: _t->updaterComponentsAdded((*reinterpret_cast< QList<QInstaller::Component*>(*)>(_a[1]))); break;
        case 7: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->statusChanged((*reinterpret_cast< QInstaller::PackageManagerCore::Status(*)>(_a[1]))); break;
        case 9: _t->defaultTranslationsLoadedForLanguage((*reinterpret_cast< QLocale::Language(*)>(_a[1]))); break;
        case 10: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->finishButtonClicked(); break;
        case 12: _t->metaJobProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->metaJobTotalProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->metaJobInfoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->startAllComponentsReset(); break;
        case 16: _t->finishAllComponentsReset((*reinterpret_cast< const QList<QInstaller::Component*>(*)>(_a[1]))); break;
        case 17: _t->startUpdaterComponentsReset(); break;
        case 18: _t->finishUpdaterComponentsReset((*reinterpret_cast< const QList<QInstaller::Component*>(*)>(_a[1]))); break;
        case 19: _t->installationStarted(); break;
        case 20: _t->installationInterrupted(); break;
        case 21: _t->installationFinished(); break;
        case 22: _t->updateFinished(); break;
        case 23: _t->uninstallationStarted(); break;
        case 24: _t->uninstallationFinished(); break;
        case 25: _t->offlineGenerationStarted(); break;
        case 26: _t->offlineGenerationFinished(); break;
        case 27: _t->titleMessageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->downloadArchivesFinished(); break;
        case 29: _t->wizardPageInsertionRequested((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QInstaller::PackageManagerCore::WizardPage(*)>(_a[2]))); break;
        case 30: _t->wizardPageRemovalRequested((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 31: _t->wizardWidgetInsertionRequested((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QInstaller::PackageManagerCore::WizardPage(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: _t->wizardWidgetRemovalRequested((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 33: _t->wizardPageVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->setValidatorForCustomPageRequested((*reinterpret_cast< QInstaller::Component*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 35: _t->setAutomatedPageSwitchEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->coreNetworkSettingsChanged(); break;
        case 37: _t->guiObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 38: _t->unstableComponentFound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 39: _t->installerBinaryMarkerChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 40: _t->componentsRecalculated(); break;
        case 41: { bool _r = _t->runInstaller();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->runUninstaller();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->runPackageUpdater();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->runOfflineGenerator();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->interrupt(); break;
        case 46: _t->setCanceled(); break;
        case 47: _t->languageChanged(); break;
        case 48: _t->setCompleteUninstallation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->cancelMetaInfoJob(); break;
        case 50: _t->componentsToInstallNeedsRecalculation(); break;
        case 51: _t->clearComponentsToInstallCalculated(); break;
        case 52: _t->setDependsOnLocalInstallerBinary(); break;
        case 53: { bool _r = _t->localInstallerBinaryUsed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: { QList<QVariant> _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 55: { QList<QVariant> _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 56: { QList<QVariant> _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 57: { QList<QVariant> _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 58: { QList<QVariant> _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 59: { bool _r = _t->executeDetached((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: { bool _r = _t->executeDetached((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 61: { bool _r = _t->executeDetached((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 62: { QString _r = _t->environmentVariable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 63: { bool _r = _t->operationExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: { bool _r = _t->performOperation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: { bool _r = _t->versionMatches((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 66: { QString _r = _t->findLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { QString _r = _t->findLibrary((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 68: { QString _r = _t->findPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 69: { QString _r = _t->findPath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setInstallerBaseBinary((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 71: { bool _r = _t->containsValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 73: { QString _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 74: { QString _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: { QString _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 76: { QStringList _r = _t->values((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 77: { QStringList _r = _t->values((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 78: { QString _r = _t->key((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->addUserRepositories((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 80: _t->setTemporaryRepositories((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 81: _t->setTemporaryRepositories((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 82: _t->setTemporaryRepositories((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 83: _t->autoAcceptMessageBoxes(); break;
        case 84: _t->autoRejectMessageBoxes(); break;
        case 85: _t->setMessageBoxAutomaticAnswer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 86: _t->acceptMessageBoxDefaultButton(); break;
        case 87: _t->setAutoAcceptLicenses(); break;
        case 88: _t->setFileDialogAutomaticAnswer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 89: _t->removeFileDialogAutomaticAnswer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 90: { bool _r = _t->containsFileDialogAutomaticAnswer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 91: { bool _r = _t->isFileExtensionRegistered((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 92: { bool _r = _t->fileExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 93: { QString _r = _t->readFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 94: { QString _r = _t->readConsoleLine((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 95: { QString _r = _t->readConsoleLine((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 96: { QString _r = _t->readConsoleLine();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 97: { QString _r = _t->toNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 98: { QString _r = _t->fromNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 99: { bool _r = _t->calculateComponentsToInstall();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 100: { bool _r = _t->recalculateAllComponents();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 101: { bool _r = _t->calculateComponentsToUninstall();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 102: _t->setInstaller(); break;
        case 103: { bool _r = _t->isInstaller();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 104: { bool _r = _t->isOfflineOnly();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 105: _t->setUninstaller(); break;
        case 106: { bool _r = _t->isUninstaller();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 107: _t->setUpdater(); break;
        case 108: { bool _r = _t->isUpdater();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 109: _t->setPackageManager(); break;
        case 110: { bool _r = _t->isPackageManager();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 111: { bool _r = _t->isOfflineGenerator();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 112: { bool _r = _t->isPackageViewer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 113: { bool _r = _t->isUserSetBinaryMarker();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 114: { bool _r = _t->isCommandLineInstance();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 115: { bool _r = _t->isCommandLineDefaultInstall();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 116: { bool _r = _t->gainAdminRights();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 117: _t->dropAdminRights(); break;
        case 118: { quint64 _r = _t->requiredDiskSpace();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 119: { quint64 _r = _t->requiredTemporaryDiskSpace();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 120: { bool _r = _t->isProcessRunning((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 121: { bool _r = _t->killProcess((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->setAllowedRunningProcesses((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 123: { QStringList _r = _t->allowedRunningProcesses();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 124: { bool _r = _t->addWizardPage((*reinterpret_cast< QInstaller::Component*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 125: { bool _r = _t->removeWizardPage((*reinterpret_cast< QInstaller::Component*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 126: { bool _r = _t->addWizardPageItem((*reinterpret_cast< QInstaller::Component*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 127: { bool _r = _t->addWizardPageItem((*reinterpret_cast< QInstaller::Component*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 128: { bool _r = _t->removeWizardPageItem((*reinterpret_cast< QInstaller::Component*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 129: { bool _r = _t->setDefaultPageVisible((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 130: _t->setValidatorForCustomPage((*reinterpret_cast< QInstaller::Component*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 131: _t->selectComponent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 132: _t->deselectComponent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QInstaller::Component*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QInstaller::Component*> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::PackageManagerCore::Status >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QInstaller::Component*> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QInstaller::Component*> >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        case 124:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        case 125:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        case 126:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        case 128:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        case 130:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::Component* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PackageManagerCore::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::aboutCalculateComponentsToInstall)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::finishedCalculateComponentsToInstall)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::aboutCalculateComponentsToUninstall)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::finishedCalculateComponentsToUninstall)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QInstaller::Component * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::componentAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QList<QInstaller::Component*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::rootComponentsAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QList<QInstaller::Component*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::updaterComponentsAdded)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::valueChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QInstaller::PackageManagerCore::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::statusChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QLocale::Language );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::defaultTranslationsLoadedForLanguage)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::currentPageChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::finishButtonClicked)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::metaJobProgress)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::metaJobTotalProgress)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::metaJobInfoMessage)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::startAllComponentsReset)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(const QList<QInstaller::Component*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::finishAllComponentsReset)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::startUpdaterComponentsReset)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(const QList<QInstaller::Component*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::finishUpdaterComponentsReset)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::installationStarted)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::installationInterrupted)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::installationFinished)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::updateFinished)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::uninstallationStarted)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::uninstallationFinished)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::offlineGenerationStarted)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::offlineGenerationFinished)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::titleMessageChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::downloadArchivesFinished)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QWidget * , QInstaller::PackageManagerCore::WizardPage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::wizardPageInsertionRequested)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::wizardPageRemovalRequested)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QWidget * , QInstaller::PackageManagerCore::WizardPage , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::wizardWidgetInsertionRequested)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::wizardWidgetRemovalRequested)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::wizardPageVisibilityChangeRequested)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QInstaller::Component * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::setValidatorForCustomPageRequested)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::setAutomatedPageSwitchEnabled)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::coreNetworkSettingsChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::guiObjectChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::unstableComponentFound)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::installerBinaryMarkerChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (PackageManagerCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCore::componentsRecalculated)) {
                *result = 40;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PackageManagerCore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::PackageManagerCore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__PackageManagerCore.data,
    qt_meta_data_QInstaller__PackageManagerCore,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::PackageManagerCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::PackageManagerCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__PackageManagerCore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::PackageManagerCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 133)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 133;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 133)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 133;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QInstaller::PackageManagerCore::aboutCalculateComponentsToInstall()const
{
    QMetaObject::activate(const_cast< QInstaller::PackageManagerCore *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInstaller::PackageManagerCore::finishedCalculateComponentsToInstall()const
{
    QMetaObject::activate(const_cast< QInstaller::PackageManagerCore *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInstaller::PackageManagerCore::aboutCalculateComponentsToUninstall()const
{
    QMetaObject::activate(const_cast< QInstaller::PackageManagerCore *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInstaller::PackageManagerCore::finishedCalculateComponentsToUninstall()const
{
    QMetaObject::activate(const_cast< QInstaller::PackageManagerCore *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QInstaller::PackageManagerCore::componentAdded(QInstaller::Component * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QInstaller::PackageManagerCore::rootComponentsAdded(QList<QInstaller::Component*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QInstaller::PackageManagerCore::updaterComponentsAdded(QList<QInstaller::Component*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QInstaller::PackageManagerCore::valueChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QInstaller::PackageManagerCore::statusChanged(QInstaller::PackageManagerCore::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QInstaller::PackageManagerCore::defaultTranslationsLoadedForLanguage(QLocale::Language _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QInstaller::PackageManagerCore::currentPageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QInstaller::PackageManagerCore::finishButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QInstaller::PackageManagerCore::metaJobProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QInstaller::PackageManagerCore::metaJobTotalProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QInstaller::PackageManagerCore::metaJobInfoMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QInstaller::PackageManagerCore::startAllComponentsReset()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QInstaller::PackageManagerCore::finishAllComponentsReset(const QList<QInstaller::Component*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QInstaller::PackageManagerCore::startUpdaterComponentsReset()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QInstaller::PackageManagerCore::finishUpdaterComponentsReset(const QList<QInstaller::Component*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QInstaller::PackageManagerCore::installationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QInstaller::PackageManagerCore::installationInterrupted()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QInstaller::PackageManagerCore::installationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QInstaller::PackageManagerCore::updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QInstaller::PackageManagerCore::uninstallationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QInstaller::PackageManagerCore::uninstallationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void QInstaller::PackageManagerCore::offlineGenerationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void QInstaller::PackageManagerCore::offlineGenerationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void QInstaller::PackageManagerCore::titleMessageChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void QInstaller::PackageManagerCore::downloadArchivesFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void QInstaller::PackageManagerCore::wizardPageInsertionRequested(QWidget * _t1, QInstaller::PackageManagerCore::WizardPage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void QInstaller::PackageManagerCore::wizardPageRemovalRequested(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void QInstaller::PackageManagerCore::wizardWidgetInsertionRequested(QWidget * _t1, QInstaller::PackageManagerCore::WizardPage _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void QInstaller::PackageManagerCore::wizardWidgetRemovalRequested(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void QInstaller::PackageManagerCore::wizardPageVisibilityChangeRequested(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void QInstaller::PackageManagerCore::setValidatorForCustomPageRequested(QInstaller::Component * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void QInstaller::PackageManagerCore::setAutomatedPageSwitchEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void QInstaller::PackageManagerCore::coreNetworkSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void QInstaller::PackageManagerCore::guiObjectChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void QInstaller::PackageManagerCore::unstableComponentFound(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void QInstaller::PackageManagerCore::installerBinaryMarkerChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void QInstaller::PackageManagerCore::componentsRecalculated()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
