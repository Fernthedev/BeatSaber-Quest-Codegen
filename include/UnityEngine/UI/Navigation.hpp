// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Selectable
  class Selectable;
  // Skipping declaration: Mode because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: Navigation
  struct Navigation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Navigation, "UnityEngine.UI", "Navigation");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.Navigation
  // [TokenAttribute] Offset: FFFFFFFF
  struct Navigation/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UI::Navigation>*/ {
    public:
    // Nested type: ::UnityEngine::UI::Navigation::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.Navigation/UnityEngine.UI.Mode
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct Mode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode None
      static ::UnityEngine::UI::Navigation::Mode _get_None();
      // Set static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode None
      static void _set_None(::UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Horizontal
      static constexpr const int Horizontal = 1;
      // Get static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Horizontal
      static ::UnityEngine::UI::Navigation::Mode _get_Horizontal();
      // Set static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Horizontal
      static void _set_Horizontal(::UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Vertical
      static constexpr const int Vertical = 2;
      // Get static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Vertical
      static ::UnityEngine::UI::Navigation::Mode _get_Vertical();
      // Set static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Vertical
      static void _set_Vertical(::UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Automatic
      static constexpr const int Automatic = 3;
      // Get static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Automatic
      static ::UnityEngine::UI::Navigation::Mode _get_Automatic();
      // Set static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Automatic
      static void _set_Automatic(::UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Explicit
      static constexpr const int Explicit = 4;
      // Get static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Explicit
      static ::UnityEngine::UI::Navigation::Mode _get_Explicit();
      // Set static field: static public UnityEngine.UI.Navigation/UnityEngine.UI.Mode Explicit
      static void _set_Explicit(::UnityEngine::UI::Navigation::Mode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.UI.Navigation/UnityEngine.UI.Mode
    #pragma pack(pop)
    static check_size<sizeof(Navigation::Mode), 0 + sizeof(int)> __UnityEngine_UI_Navigation_ModeSizeCheck;
    static_assert(sizeof(Navigation::Mode) == 0x4);
    public:
    // private UnityEngine.UI.Navigation/UnityEngine.UI.Mode m_Mode
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UI::Navigation::Mode m_Mode;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Navigation::Mode) == 0x4);
    // Padding between fields: m_Mode and: m_SelectOnUp
    char __padding0[0x4] = {};
    // private UnityEngine.UI.Selectable m_SelectOnUp
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::UI::Selectable* m_SelectOnUp;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Selectable*) == 0x8);
    // private UnityEngine.UI.Selectable m_SelectOnDown
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UI::Selectable* m_SelectOnDown;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Selectable*) == 0x8);
    // private UnityEngine.UI.Selectable m_SelectOnLeft
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Selectable* m_SelectOnLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Selectable*) == 0x8);
    // private UnityEngine.UI.Selectable m_SelectOnRight
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Selectable* m_SelectOnRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Selectable*) == 0x8);
    public:
    // Creating value type constructor for type: Navigation
    constexpr Navigation(::UnityEngine::UI::Navigation::Mode m_Mode_ = {}, ::UnityEngine::UI::Selectable* m_SelectOnUp_ = {}, ::UnityEngine::UI::Selectable* m_SelectOnDown_ = {}, ::UnityEngine::UI::Selectable* m_SelectOnLeft_ = {}, ::UnityEngine::UI::Selectable* m_SelectOnRight_ = {}) noexcept : m_Mode{m_Mode_}, m_SelectOnUp{m_SelectOnUp_}, m_SelectOnDown{m_SelectOnDown_}, m_SelectOnLeft{m_SelectOnLeft_}, m_SelectOnRight{m_SelectOnRight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UI::Navigation>
    operator ::System::IEquatable_1<::UnityEngine::UI::Navigation>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UI::Navigation>*>(this);
    }
    // Creating interface conversion operator: i_Navigation
    inline ::System::IEquatable_1<::UnityEngine::UI::Navigation>* i_Navigation() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::UI::Navigation>*>(this);
    }
    // Get instance field reference: private UnityEngine.UI.Navigation/UnityEngine.UI.Mode m_Mode
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Navigation::Mode& dyn_m_Mode();
    // Get instance field reference: private UnityEngine.UI.Selectable m_SelectOnUp
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Selectable*& dyn_m_SelectOnUp();
    // Get instance field reference: private UnityEngine.UI.Selectable m_SelectOnDown
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Selectable*& dyn_m_SelectOnDown();
    // Get instance field reference: private UnityEngine.UI.Selectable m_SelectOnLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Selectable*& dyn_m_SelectOnLeft();
    // Get instance field reference: private UnityEngine.UI.Selectable m_SelectOnRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Selectable*& dyn_m_SelectOnRight();
    // public UnityEngine.UI.Navigation/UnityEngine.UI.Mode get_mode()
    // Offset: 0x1ECD73C
    ::UnityEngine::UI::Navigation::Mode get_mode();
    // public System.Void set_mode(UnityEngine.UI.Navigation/UnityEngine.UI.Mode value)
    // Offset: 0x1ECD744
    void set_mode(::UnityEngine::UI::Navigation::Mode value);
    // public UnityEngine.UI.Selectable get_selectOnUp()
    // Offset: 0x1ECD74C
    ::UnityEngine::UI::Selectable* get_selectOnUp();
    // public System.Void set_selectOnUp(UnityEngine.UI.Selectable value)
    // Offset: 0x1ECD754
    void set_selectOnUp(::UnityEngine::UI::Selectable* value);
    // public UnityEngine.UI.Selectable get_selectOnDown()
    // Offset: 0x1ECD75C
    ::UnityEngine::UI::Selectable* get_selectOnDown();
    // public System.Void set_selectOnDown(UnityEngine.UI.Selectable value)
    // Offset: 0x1ECD764
    void set_selectOnDown(::UnityEngine::UI::Selectable* value);
    // public UnityEngine.UI.Selectable get_selectOnLeft()
    // Offset: 0x1ECD76C
    ::UnityEngine::UI::Selectable* get_selectOnLeft();
    // public System.Void set_selectOnLeft(UnityEngine.UI.Selectable value)
    // Offset: 0x1ECD774
    void set_selectOnLeft(::UnityEngine::UI::Selectable* value);
    // public UnityEngine.UI.Selectable get_selectOnRight()
    // Offset: 0x1ECD77C
    ::UnityEngine::UI::Selectable* get_selectOnRight();
    // public System.Void set_selectOnRight(UnityEngine.UI.Selectable value)
    // Offset: 0x1ECD784
    void set_selectOnRight(::UnityEngine::UI::Selectable* value);
    // static public UnityEngine.UI.Navigation get_defaultNavigation()
    // Offset: 0x1ECD78C
    static ::UnityEngine::UI::Navigation get_defaultNavigation();
    // public System.Boolean Equals(UnityEngine.UI.Navigation other)
    // Offset: 0x1ECD7AC
    bool Equals(::UnityEngine::UI::Navigation other);
  }; // UnityEngine.UI.Navigation
  #pragma pack(pop)
  static check_size<sizeof(Navigation), 32 + sizeof(::UnityEngine::UI::Selectable*)> __UnityEngine_UI_NavigationSizeCheck;
  static_assert(sizeof(Navigation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Navigation::Mode, "UnityEngine.UI", "Navigation/Mode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::get_mode
// Il2CppName: get_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Navigation::Mode (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "get_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::set_mode
// Il2CppName: set_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Navigation::Mode)>(&UnityEngine::UI::Navigation::set_mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Navigation/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "set_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::get_selectOnUp
// Il2CppName: get_selectOnUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "get_selectOnUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::set_selectOnUp
// Il2CppName: set_selectOnUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&UnityEngine::UI::Navigation::set_selectOnUp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "set_selectOnUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::get_selectOnDown
// Il2CppName: get_selectOnDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "get_selectOnDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::set_selectOnDown
// Il2CppName: set_selectOnDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&UnityEngine::UI::Navigation::set_selectOnDown)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "set_selectOnDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::get_selectOnLeft
// Il2CppName: get_selectOnLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "get_selectOnLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::set_selectOnLeft
// Il2CppName: set_selectOnLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&UnityEngine::UI::Navigation::set_selectOnLeft)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "set_selectOnLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::get_selectOnRight
// Il2CppName: get_selectOnRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "get_selectOnRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::set_selectOnRight
// Il2CppName: set_selectOnRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&UnityEngine::UI::Navigation::set_selectOnRight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "set_selectOnRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::get_defaultNavigation
// Il2CppName: get_defaultNavigation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Navigation (*)()>(&UnityEngine::UI::Navigation::get_defaultNavigation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "get_defaultNavigation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Navigation::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Navigation)>(&UnityEngine::UI::Navigation::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Navigation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Navigation), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
