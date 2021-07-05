// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ILayoutElement
  class ILayoutElement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.LayoutUtility
  class LayoutUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::UI::LayoutUtility::$$c
    class $$c;
    // Creating value type constructor for type: LayoutUtility
    LayoutUtility() noexcept {}
    // static public System.Single GetMinSize(UnityEngine.RectTransform rect, System.Int32 axis)
    // Offset: 0x19AB22C
    static float GetMinSize(UnityEngine::RectTransform* rect, int axis);
    // static public System.Single GetPreferredSize(UnityEngine.RectTransform rect, System.Int32 axis)
    // Offset: 0x19AB428
    static float GetPreferredSize(UnityEngine::RectTransform* rect, int axis);
    // static public System.Single GetFlexibleSize(UnityEngine.RectTransform rect, System.Int32 axis)
    // Offset: 0x19AB7DC
    static float GetFlexibleSize(UnityEngine::RectTransform* rect, int axis);
    // static public System.Single GetMinWidth(UnityEngine.RectTransform rect)
    // Offset: 0x19AB238
    static float GetMinWidth(UnityEngine::RectTransform* rect);
    // static public System.Single GetPreferredWidth(UnityEngine.RectTransform rect)
    // Offset: 0x19AB434
    static float GetPreferredWidth(UnityEngine::RectTransform* rect);
    // static public System.Single GetFlexibleWidth(UnityEngine.RectTransform rect)
    // Offset: 0x19AB7E8
    static float GetFlexibleWidth(UnityEngine::RectTransform* rect);
    // static public System.Single GetMinHeight(UnityEngine.RectTransform rect)
    // Offset: 0x19AB330
    static float GetMinHeight(UnityEngine::RectTransform* rect);
    // static public System.Single GetPreferredHeight(UnityEngine.RectTransform rect)
    // Offset: 0x19AB608
    static float GetPreferredHeight(UnityEngine::RectTransform* rect);
    // static public System.Single GetFlexibleHeight(UnityEngine.RectTransform rect)
    // Offset: 0x19AB8E0
    static float GetFlexibleHeight(UnityEngine::RectTransform* rect);
    // static public System.Single GetLayoutProperty(UnityEngine.RectTransform rect, System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> property, System.Single defaultValue)
    // Offset: 0x19AB9D8
    static float GetLayoutProperty(UnityEngine::RectTransform* rect, System::Func_2<UnityEngine::UI::ILayoutElement*, float>* property, float defaultValue);
    // static public System.Single GetLayoutProperty(UnityEngine.RectTransform rect, System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> property, System.Single defaultValue, out UnityEngine.UI.ILayoutElement source)
    // Offset: 0x19AB9FC
    static float GetLayoutProperty(UnityEngine::RectTransform* rect, System::Func_2<UnityEngine::UI::ILayoutElement*, float>* property, float defaultValue, UnityEngine::UI::ILayoutElement*& source);
  }; // UnityEngine.UI.LayoutUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutUtility*, "UnityEngine.UI", "LayoutUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetMinSize
// Il2CppName: GetMinSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*, int)>(&UnityEngine::UI::LayoutUtility::GetMinSize)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetMinSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetPreferredSize
// Il2CppName: GetPreferredSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*, int)>(&UnityEngine::UI::LayoutUtility::GetPreferredSize)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetPreferredSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetFlexibleSize
// Il2CppName: GetFlexibleSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*, int)>(&UnityEngine::UI::LayoutUtility::GetFlexibleSize)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetFlexibleSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetMinWidth
// Il2CppName: GetMinWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutUtility::GetMinWidth)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetMinWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetPreferredWidth
// Il2CppName: GetPreferredWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutUtility::GetPreferredWidth)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetPreferredWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetFlexibleWidth
// Il2CppName: GetFlexibleWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutUtility::GetFlexibleWidth)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetFlexibleWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetMinHeight
// Il2CppName: GetMinHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutUtility::GetMinHeight)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetMinHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetPreferredHeight
// Il2CppName: GetPreferredHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutUtility::GetPreferredHeight)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetPreferredHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetFlexibleHeight
// Il2CppName: GetFlexibleHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutUtility::GetFlexibleHeight)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetFlexibleHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetLayoutProperty
// Il2CppName: GetLayoutProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*, System::Func_2<UnityEngine::UI::ILayoutElement*, float>*, float)>(&UnityEngine::UI::LayoutUtility::GetLayoutProperty)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* property = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ILayoutElement"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetLayoutProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, property, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutUtility::GetLayoutProperty
// Il2CppName: GetLayoutProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::RectTransform*, System::Func_2<UnityEngine::UI::ILayoutElement*, float>*, float, UnityEngine::UI::ILayoutElement*&)>(&UnityEngine::UI::LayoutUtility::GetLayoutProperty)> {
  const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* property = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ILayoutElement"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ILayoutElement")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutUtility*), "GetLayoutProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, property, defaultValue, source});
  }
};
