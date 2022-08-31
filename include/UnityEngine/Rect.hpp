// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rect, "UnityEngine", "Rect");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rect
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 105647C
  // [RequiredByNativeCodeAttribute] Offset: 105647C
  // [NativeClassAttribute] Offset: 105647C
  struct Rect/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rect>*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x105B0E8
    // private System.Single m_XMin
    // Size: 0x4
    // Offset: 0x0
    float m_XMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x105B120
    // private System.Single m_YMin
    // Size: 0x4
    // Offset: 0x4
    float m_YMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x105B158
    // private System.Single m_Width
    // Size: 0x4
    // Offset: 0x8
    float m_Width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x105B190
    // private System.Single m_Height
    // Size: 0x4
    // Offset: 0xC
    float m_Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Rect
    constexpr Rect(float m_XMin_ = {}, float m_YMin_ = {}, float m_Width_ = {}, float m_Height_ = {}) noexcept : m_XMin{m_XMin_}, m_YMin{m_YMin_}, m_Width{m_Width_}, m_Height{m_Height_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rect>
    operator ::System::IEquatable_1<::UnityEngine::Rect>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rect>*>(this);
    }
    // Creating interface conversion operator: i_Rect
    inline ::System::IEquatable_1<::UnityEngine::Rect>* i_Rect() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rect>*>(this);
    }
    // Get instance field reference: private System.Single m_XMin
    [[deprecated("Use field access instead!")]] float& dyn_m_XMin();
    // Get instance field reference: private System.Single m_YMin
    [[deprecated("Use field access instead!")]] float& dyn_m_YMin();
    // Get instance field reference: private System.Single m_Width
    [[deprecated("Use field access instead!")]] float& dyn_m_Width();
    // Get instance field reference: private System.Single m_Height
    [[deprecated("Use field access instead!")]] float& dyn_m_Height();
    // static public UnityEngine.Rect get_zero()
    // Offset: 0x213C9B4
    static ::UnityEngine::Rect get_zero();
    // public System.Single get_x()
    // Offset: 0x213C9D4
    float get_x();
    // public System.Void set_x(System.Single value)
    // Offset: 0x213C9DC
    void set_x(float value);
    // public System.Single get_y()
    // Offset: 0x213C9E4
    float get_y();
    // public System.Void set_y(System.Single value)
    // Offset: 0x213C9EC
    void set_y(float value);
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x213C9F4
    ::UnityEngine::Vector2 get_position();
    // public System.Void set_position(UnityEngine.Vector2 value)
    // Offset: 0x213CA24
    void set_position(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_center()
    // Offset: 0x213CA2C
    ::UnityEngine::Vector2 get_center();
    // public System.Void set_center(UnityEngine.Vector2 value)
    // Offset: 0x213CA74
    void set_center(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_min()
    // Offset: 0x213CA90
    ::UnityEngine::Vector2 get_min();
    // public UnityEngine.Vector2 get_max()
    // Offset: 0x213CAD0
    ::UnityEngine::Vector2 get_max();
    // public System.Single get_width()
    // Offset: 0x213CB2C
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0x213CB34
    void set_width(float value);
    // public System.Single get_height()
    // Offset: 0x213CB3C
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0x213CB44
    void set_height(float value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0x213CB4C
    ::UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0x213CB7C
    void set_size(::UnityEngine::Vector2 value);
    // public System.Single get_xMin()
    // Offset: 0x213CAC0
    float get_xMin();
    // public System.Void set_xMin(System.Single value)
    // Offset: 0x213CB84
    void set_xMin(float value);
    // public System.Single get_yMin()
    // Offset: 0x213CAC8
    float get_yMin();
    // public System.Void set_yMin(System.Single value)
    // Offset: 0x213CBA0
    void set_yMin(float value);
    // public System.Single get_xMax()
    // Offset: 0x213CB0C
    float get_xMax();
    // public System.Void set_xMax(System.Single value)
    // Offset: 0x213CBBC
    void set_xMax(float value);
    // public System.Single get_yMax()
    // Offset: 0x213CB1C
    float get_yMax();
    // public System.Void set_yMax(System.Single value)
    // Offset: 0x213CBCC
    void set_yMax(float value);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single width, System.Single height)
    // Offset: 0x213C990
    // ABORTED: conflicts with another method.  Rect(float x, float y, float width, float height);
    // public System.Void .ctor(UnityEngine.Vector2 position, UnityEngine.Vector2 size)
    // Offset: 0x213C99C
    Rect(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 size);
    // public System.Void .ctor(UnityEngine.Rect source)
    // Offset: 0x213C9A8
    // ABORTED: is copy constructor.  Rect(::UnityEngine::Rect source);
    // static public UnityEngine.Rect MinMaxRect(System.Single xmin, System.Single ymin, System.Single xmax, System.Single ymax)
    // Offset: 0x213C9C8
    static ::UnityEngine::Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax);
    // public System.Boolean Contains(UnityEngine.Vector2 point)
    // Offset: 0x213CBDC
    bool Contains(::UnityEngine::Vector2 point);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0x213CC20
    bool Contains(::UnityEngine::Vector3 point);
    // static private UnityEngine.Rect OrderMinMax(UnityEngine.Rect rect)
    // Offset: 0x213CC64
    static ::UnityEngine::Rect OrderMinMax(::UnityEngine::Rect rect);
    // public System.Boolean Overlaps(UnityEngine.Rect other)
    // Offset: 0x213CC90
    bool Overlaps(::UnityEngine::Rect other);
    // public System.Boolean Overlaps(UnityEngine.Rect other, System.Boolean allowInverse)
    // Offset: 0x213CCDC
    bool Overlaps(::UnityEngine::Rect other, bool allowInverse);
    // public System.Boolean Equals(UnityEngine.Rect other)
    // Offset: 0x213CEFC
    bool Equals(::UnityEngine::Rect other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x213CDD8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x213CE6C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x213CFB0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Rect
  #pragma pack(pop)
  static check_size<sizeof(Rect), 12 + sizeof(float)> __UnityEngine_RectSizeCheck;
  static_assert(sizeof(Rect) == 0x10);
  // static public System.Boolean op_Inequality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)
  // Offset: 0x213CD70
  bool operator !=(const ::UnityEngine::Rect& lhs, const ::UnityEngine::Rect& rhs);
  // static public System.Boolean op_Equality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)
  // Offset: 0x213CDA4
  bool operator ==(const ::UnityEngine::Rect& lhs, const ::UnityEngine::Rect& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rect::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)()>(&UnityEngine::Rect::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_x
// Il2CppName: set_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_x)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_y
// Il2CppName: set_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_y)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(::UnityEngine::Vector2)>(&UnityEngine::Rect::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(::UnityEngine::Vector2)>(&UnityEngine::Rect::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_min
// Il2CppName: get_min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_max
// Il2CppName: get_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(::UnityEngine::Vector2)>(&UnityEngine::Rect::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_xMin
// Il2CppName: get_xMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_xMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_xMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_xMin
// Il2CppName: set_xMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_xMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_xMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_yMin
// Il2CppName: get_yMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_yMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_yMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_yMin
// Il2CppName: set_yMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_yMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_yMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_xMax
// Il2CppName: get_xMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_xMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_xMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_xMax
// Il2CppName: set_xMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_xMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_xMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::get_yMax
// Il2CppName: get_yMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rect::*)()>(&UnityEngine::Rect::get_yMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "get_yMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::set_yMax
// Il2CppName: set_yMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rect::*)(float)>(&UnityEngine::Rect::set_yMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "set_yMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::Rect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rect::Rect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rect::Rect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rect::MinMaxRect
// Il2CppName: MinMaxRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(float, float, float, float)>(&UnityEngine::Rect::MinMaxRect)> {
  static const MethodInfo* get() {
    static auto* xmin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ymin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* xmax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ymax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "MinMaxRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmin, ymin, xmax, ymax});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rect::*)(::UnityEngine::Vector2)>(&UnityEngine::Rect::Contains)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rect::*)(::UnityEngine::Vector3)>(&UnityEngine::Rect::Contains)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::OrderMinMax
// Il2CppName: OrderMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect)>(&UnityEngine::Rect::OrderMinMax)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "OrderMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::Overlaps
// Il2CppName: Overlaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rect::*)(::UnityEngine::Rect)>(&UnityEngine::Rect::Overlaps)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "Overlaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::Overlaps
// Il2CppName: Overlaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rect::*)(::UnityEngine::Rect, bool)>(&UnityEngine::Rect::Overlaps)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* allowInverse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "Overlaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, allowInverse});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rect::*)(::UnityEngine::Rect)>(&UnityEngine::Rect::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rect::*)()>(&UnityEngine::Rect::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rect::*)(::Il2CppObject*)>(&UnityEngine::Rect::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rect::*)()>(&UnityEngine::Rect::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rect), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rect::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Rect::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
