// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LevelCategory because it is already included!
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: SelectLevelCategoryViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectLevelCategoryViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::LevelCategory
    struct LevelCategory;
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo
    class LevelCategoryInfo;
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SelectLevelCategoryViewController/LevelCategory
    // [TokenAttribute] Offset: FFFFFFFF
    struct LevelCategory/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LevelCategory
      constexpr LevelCategory(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory None
      static constexpr const int None = 0;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory None
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_None();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory None
      static void _set_None(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory OstAndExtras
      static constexpr const int OstAndExtras = 1;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory OstAndExtras
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_OstAndExtras();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory OstAndExtras
      static void _set_OstAndExtras(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory MusicPacks
      static constexpr const int MusicPacks = 2;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory MusicPacks
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_MusicPacks();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory MusicPacks
      static void _set_MusicPacks(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory CustomSongs
      static constexpr const int CustomSongs = 3;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory CustomSongs
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_CustomSongs();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory CustomSongs
      static void _set_CustomSongs(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory Favorites
      static constexpr const int Favorites = 4;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory Favorites
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_Favorites();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory Favorites
      static void _set_Favorites(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory All
      static constexpr const int All = 5;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory All
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_All();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory All
      static void _set_All(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // SelectLevelCategoryViewController/LevelCategory
    #pragma pack(pop)
    static check_size<sizeof(SelectLevelCategoryViewController::LevelCategory), 0 + sizeof(int)> __GlobalNamespace_SelectLevelCategoryViewController_LevelCategorySizeCheck;
    static_assert(sizeof(SelectLevelCategoryViewController::LevelCategory) == 0x4);
    // private SelectLevelCategoryViewController/LevelCategoryInfo[] _allLevelCategoryInfos
    // Size: 0x8
    // Offset: 0x70
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* allLevelCategoryInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*) == 0x8);
    // private HMUI.IconSegmentedControl _levelFilterCategoryIconSegmentedControl
    // Size: 0x8
    // Offset: 0x78
    HMUI::IconSegmentedControl* levelFilterCategoryIconSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControl*) == 0x8);
    // [InjectAttribute] Offset: 0xE41D54
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // private System.Action`2<SelectLevelCategoryViewController,SelectLevelCategoryViewController/LevelCategory> didSelectLevelCategoryEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* didSelectLevelCategoryEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*) == 0x8);
    // private SelectLevelCategoryViewController/LevelCategory _prevSelectedLevelCategory
    // Size: 0x4
    // Offset: 0x90
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory prevSelectedLevelCategory;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory) == 0x4);
    // Padding between fields: prevSelectedLevelCategory and: levelCategoryInfos
    char __padding4[0x4] = {};
    // private SelectLevelCategoryViewController/LevelCategoryInfo[] _levelCategoryInfos
    // Size: 0x8
    // Offset: 0x98
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* levelCategoryInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*) == 0x8);
    // Creating value type constructor for type: SelectLevelCategoryViewController
    SelectLevelCategoryViewController(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* allLevelCategoryInfos_ = {}, HMUI::IconSegmentedControl* levelFilterCategoryIconSegmentedControl_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}, System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* didSelectLevelCategoryEvent_ = {}, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory prevSelectedLevelCategory_ = {}, ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* levelCategoryInfos_ = {}) noexcept : allLevelCategoryInfos{allLevelCategoryInfos_}, levelFilterCategoryIconSegmentedControl{levelFilterCategoryIconSegmentedControl_}, analyticsModel{analyticsModel_}, didSelectLevelCategoryEvent{didSelectLevelCategoryEvent_}, prevSelectedLevelCategory{prevSelectedLevelCategory_}, levelCategoryInfos{levelCategoryInfos_} {}
    // Get instance field reference: private SelectLevelCategoryViewController/LevelCategoryInfo[] _allLevelCategoryInfos
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*& dyn__allLevelCategoryInfos();
    // Get instance field reference: private HMUI.IconSegmentedControl _levelFilterCategoryIconSegmentedControl
    HMUI::IconSegmentedControl*& dyn__levelFilterCategoryIconSegmentedControl();
    // Get instance field reference: private readonly IAnalyticsModel _analyticsModel
    GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // Get instance field reference: private System.Action`2<SelectLevelCategoryViewController,SelectLevelCategoryViewController/LevelCategory> didSelectLevelCategoryEvent
    System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*& dyn_didSelectLevelCategoryEvent();
    // Get instance field reference: private SelectLevelCategoryViewController/LevelCategory _prevSelectedLevelCategory
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory& dyn__prevSelectedLevelCategory();
    // Get instance field reference: private SelectLevelCategoryViewController/LevelCategoryInfo[] _levelCategoryInfos
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*& dyn__levelCategoryInfos();
    // public SelectLevelCategoryViewController/LevelCategory get_selectedLevelCategory()
    // Offset: 0x119D3F0
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory get_selectedLevelCategory();
    // public System.Void add_didSelectLevelCategoryEvent(System.Action`2<SelectLevelCategoryViewController,SelectLevelCategoryViewController/LevelCategory> value)
    // Offset: 0x119D2A8
    void add_didSelectLevelCategoryEvent(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* value);
    // public System.Void remove_didSelectLevelCategoryEvent(System.Action`2<SelectLevelCategoryViewController,SelectLevelCategoryViewController/LevelCategory> value)
    // Offset: 0x119D34C
    void remove_didSelectLevelCategoryEvent(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* value);
    // public System.Void Setup(SelectLevelCategoryViewController/LevelCategory selectedCategory, SelectLevelCategoryViewController/LevelCategory[] enabledLevelCategories)
    // Offset: 0x119D454
    void Setup(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory selectedCategory, ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* enabledLevelCategories);
    // private System.Void LevelFilterCategoryIconSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 index)
    // Offset: 0x119D858
    void LevelFilterCategoryIconSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int index);
    // public System.Void .ctor()
    // Offset: 0x119DA5C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelCategoryViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectLevelCategoryViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelCategoryViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x119D700
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x119D7AC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // SelectLevelCategoryViewController
  #pragma pack(pop)
  static check_size<sizeof(SelectLevelCategoryViewController), 152 + sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*)> __GlobalNamespace_SelectLevelCategoryViewControllerSizeCheck;
  static_assert(sizeof(SelectLevelCategoryViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelCategoryViewController*, "", "SelectLevelCategoryViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory, "", "SelectLevelCategoryViewController/LevelCategory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory
// Il2CppName: get_selectedLevelCategory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory (GlobalNamespace::SelectLevelCategoryViewController::*)()>(&GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController*), "get_selectedLevelCategory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent
// Il2CppName: add_didSelectLevelCategoryEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*)>(&GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController"), ::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategory")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController*), "add_didSelectLevelCategoryEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent
// Il2CppName: remove_didSelectLevelCategoryEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*)>(&GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController"), ::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategory")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController*), "remove_didSelectLevelCategoryEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory, ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*)>(&GlobalNamespace::SelectLevelCategoryViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* selectedCategory = &::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategory")->byval_arg;
    static auto* enabledLevelCategories = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategory"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedCategory, enabledLevelCategories});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell
// Il2CppName: LevelFilterCategoryIconSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController*), "LevelFilterCategoryIconSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool, bool)>(&GlobalNamespace::SelectLevelCategoryViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool)>(&GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
