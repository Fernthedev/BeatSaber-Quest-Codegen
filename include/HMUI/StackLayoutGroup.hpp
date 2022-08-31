// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.LayoutGroup
#include "UnityEngine/UI/LayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: StackLayoutGroup
  class StackLayoutGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::StackLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::StackLayoutGroup*, "HMUI", "StackLayoutGroup");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x5A
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.StackLayoutGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class StackLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
    public:
    public:
    // protected System.Boolean m_ChildForceExpandWidth
    // Size: 0x1
    // Offset: 0x58
    bool m_ChildForceExpandWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_ChildForceExpandHeight
    // Size: 0x1
    // Offset: 0x59
    bool m_ChildForceExpandHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: protected System.Boolean m_ChildForceExpandWidth
    [[deprecated("Use field access instead!")]] bool& dyn_m_ChildForceExpandWidth();
    // Get instance field reference: protected System.Boolean m_ChildForceExpandHeight
    [[deprecated("Use field access instead!")]] bool& dyn_m_ChildForceExpandHeight();
    // public System.Boolean get_childForceExpandWidth()
    // Offset: 0x16E1368
    bool get_childForceExpandWidth();
    // public System.Void set_childForceExpandWidth(System.Boolean value)
    // Offset: 0x16E1370
    void set_childForceExpandWidth(bool value);
    // public System.Boolean get_childForceExpandHeight()
    // Offset: 0x16E13D4
    bool get_childForceExpandHeight();
    // public System.Void set_childForceExpandHeight(System.Boolean value)
    // Offset: 0x16E13DC
    void set_childForceExpandHeight(bool value);
    // protected System.Void .ctor()
    // Offset: 0x16E1440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackLayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::StackLayoutGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackLayoutGroup*, creationType>()));
    }
    // private System.Void CalcAlongAxis(System.Int32 axis)
    // Offset: 0x16E147C
    void CalcAlongAxis(int axis);
    // private System.Void SetChildrenAlongAxis(System.Int32 axis)
    // Offset: 0x16E1694
    void SetChildrenAlongAxis(int axis);
    // public override System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x16E1450
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public override System.Void CalculateLayoutInputVertical()
    // Offset: 0x16E1684
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public override System.Void SetLayoutHorizontal()
    // Offset: 0x16E168C
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public override System.Void SetLayoutVertical()
    // Offset: 0x16E18AC
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutVertical()
    void SetLayoutVertical();
  }; // HMUI.StackLayoutGroup
  #pragma pack(pop)
  static check_size<sizeof(StackLayoutGroup), 89 + sizeof(bool)> __HMUI_StackLayoutGroupSizeCheck;
  static_assert(sizeof(StackLayoutGroup) == 0x5A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::get_childForceExpandWidth
// Il2CppName: get_childForceExpandWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::StackLayoutGroup::*)()>(&HMUI::StackLayoutGroup::get_childForceExpandWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "get_childForceExpandWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::set_childForceExpandWidth
// Il2CppName: set_childForceExpandWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)(bool)>(&HMUI::StackLayoutGroup::set_childForceExpandWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "set_childForceExpandWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::get_childForceExpandHeight
// Il2CppName: get_childForceExpandHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::StackLayoutGroup::*)()>(&HMUI::StackLayoutGroup::get_childForceExpandHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "get_childForceExpandHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::set_childForceExpandHeight
// Il2CppName: set_childForceExpandHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)(bool)>(&HMUI::StackLayoutGroup::set_childForceExpandHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "set_childForceExpandHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::CalcAlongAxis
// Il2CppName: CalcAlongAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)(int)>(&HMUI::StackLayoutGroup::CalcAlongAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "CalcAlongAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::SetChildrenAlongAxis
// Il2CppName: SetChildrenAlongAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)(int)>(&HMUI::StackLayoutGroup::SetChildrenAlongAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "SetChildrenAlongAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::CalculateLayoutInputHorizontal
// Il2CppName: CalculateLayoutInputHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)()>(&HMUI::StackLayoutGroup::CalculateLayoutInputHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "CalculateLayoutInputHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::CalculateLayoutInputVertical
// Il2CppName: CalculateLayoutInputVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)()>(&HMUI::StackLayoutGroup::CalculateLayoutInputVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "CalculateLayoutInputVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::SetLayoutHorizontal
// Il2CppName: SetLayoutHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)()>(&HMUI::StackLayoutGroup::SetLayoutHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "SetLayoutHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::StackLayoutGroup::SetLayoutVertical
// Il2CppName: SetLayoutVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackLayoutGroup::*)()>(&HMUI::StackLayoutGroup::SetLayoutVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackLayoutGroup*), "SetLayoutVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
