// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: ContactFilter2D
  struct ContactFilter2D;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PhysicsScene2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DD7EA8
  struct PhysicsScene2D/*, public System::ValueType, public System::IEquatable_1<UnityEngine::PhysicsScene2D>*/ {
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PhysicsScene2D
    constexpr PhysicsScene2D(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::PhysicsScene2D>
    operator System::IEquatable_1<UnityEngine::PhysicsScene2D>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::PhysicsScene2D>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private System.Int32 m_Handle
    int& dyn_m_Handle();
    // public System.Boolean Equals(UnityEngine.PhysicsScene2D other)
    // Offset: 0x241447C
    bool Equals(UnityEngine::PhysicsScene2D other);
    // public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x24133C4
    UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask);
    // public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter)
    // Offset: 0x24136BC
    UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter);
    // static private UnityEngine.RaycastHit2D Raycast_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter)
    // Offset: 0x241448C
    static UnityEngine::RaycastHit2D Raycast_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter);
    // public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x2413A78
    int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastArray_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x24145AC
    static int RaycastArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x2413C54
    int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastList_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x24146B0
    static int RaycastList_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // public System.Int32 GetRayIntersection(UnityEngine.Ray ray, System.Single distance, UnityEngine.RaycastHit2D[] results, System.Int32 layerMask)
    // Offset: 0x24140A8
    int GetRayIntersection(UnityEngine::Ray ray, float distance, ::Array<UnityEngine::RaycastHit2D>* results, int layerMask);
    // static private System.Int32 GetRayIntersectionArray_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x24147B4
    static int GetRayIntersectionArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float distance, int layerMask, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Void Raycast_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector2 origin, ref UnityEngine.Vector2 direction, System.Single distance, ref UnityEngine.ContactFilter2D contactFilter, out UnityEngine.RaycastHit2D ret)
    // Offset: 0x241452C
    static void Raycast_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector2> origin, ByRef<UnityEngine::Vector2> direction, float distance, ByRef<UnityEngine::ContactFilter2D> contactFilter, ByRef<UnityEngine::RaycastHit2D> ret);
    // static private System.Int32 RaycastArray_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector2 origin, ref UnityEngine.Vector2 direction, System.Single distance, ref UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x2414630
    static int RaycastArray_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector2> origin, ByRef<UnityEngine::Vector2> direction, float distance, ByRef<UnityEngine::ContactFilter2D> contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastList_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector2 origin, ref UnityEngine.Vector2 direction, System.Single distance, ref UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x2414734
    static int RaycastList_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector2> origin, ByRef<UnityEngine::Vector2> direction, float distance, ByRef<UnityEngine::ContactFilter2D> contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 GetRayIntersectionArray_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector3 origin, ref UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x2414840
    static int GetRayIntersectionArray_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector3> origin, ByRef<UnityEngine::Vector3> direction, float distance, int layerMask, ::Array<UnityEngine::RaycastHit2D>* results);
    // public override System.String ToString()
    // Offset: 0x2414310
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x24143EC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x24143F4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.PhysicsScene2D
  #pragma pack(pop)
  static check_size<sizeof(PhysicsScene2D), 0 + sizeof(int)> __UnityEngine_PhysicsScene2DSizeCheck;
  static_assert(sizeof(PhysicsScene2D) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene2D, "UnityEngine", "PhysicsScene2D");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene2D::*)(UnityEngine::PhysicsScene2D)>(&UnityEngine::PhysicsScene2D::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit2D (UnityEngine::PhysicsScene2D::*)(UnityEngine::Vector2, UnityEngine::Vector2, float, int)>(&UnityEngine::PhysicsScene2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit2D (UnityEngine::PhysicsScene2D::*)(UnityEngine::Vector2, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D)>(&UnityEngine::PhysicsScene2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, contactFilter});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Raycast_Internal
// Il2CppName: Raycast_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit2D (*)(UnityEngine::PhysicsScene2D, UnityEngine::Vector2, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D)>(&UnityEngine::PhysicsScene2D::Raycast_Internal)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Raycast_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, contactFilter});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene2D::*)(UnityEngine::Vector2, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, ::Array<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::RaycastArray_Internal
// Il2CppName: RaycastArray_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::PhysicsScene2D, UnityEngine::Vector2, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, ::Array<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::RaycastArray_Internal)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "RaycastArray_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene2D::*)(UnityEngine::Vector2, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::RaycastList_Internal
// Il2CppName: RaycastList_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::PhysicsScene2D, UnityEngine::Vector2, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::RaycastList_Internal)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "RaycastList_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::GetRayIntersection
// Il2CppName: GetRayIntersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene2D::*)(UnityEngine::Ray, float, ::Array<UnityEngine::RaycastHit2D>*, int)>(&UnityEngine::PhysicsScene2D::GetRayIntersection)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "GetRayIntersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance, results, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal
// Il2CppName: GetRayIntersectionArray_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::PhysicsScene2D, UnityEngine::Vector3, UnityEngine::Vector3, float, int, ::Array<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "GetRayIntersectionArray_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, layerMask, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Raycast_Internal_Injected
// Il2CppName: Raycast_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::PhysicsScene2D>, ByRef<UnityEngine::Vector2>, ByRef<UnityEngine::Vector2>, float, ByRef<UnityEngine::ContactFilter2D>, ByRef<UnityEngine::RaycastHit2D>)>(&UnityEngine::PhysicsScene2D::Raycast_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Raycast_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, contactFilter, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::RaycastArray_Internal_Injected
// Il2CppName: RaycastArray_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<UnityEngine::PhysicsScene2D>, ByRef<UnityEngine::Vector2>, ByRef<UnityEngine::Vector2>, float, ByRef<UnityEngine::ContactFilter2D>, ::Array<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::RaycastArray_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->this_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "RaycastArray_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::RaycastList_Internal_Injected
// Il2CppName: RaycastList_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<UnityEngine::PhysicsScene2D>, ByRef<UnityEngine::Vector2>, ByRef<UnityEngine::Vector2>, float, ByRef<UnityEngine::ContactFilter2D>, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::RaycastList_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->this_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "RaycastList_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal_Injected
// Il2CppName: GetRayIntersectionArray_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<UnityEngine::PhysicsScene2D>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, float, int, ::Array<UnityEngine::RaycastHit2D>*)>(&UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "GetRayIntersectionArray_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, layerMask, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::PhysicsScene2D::*)()>(&UnityEngine::PhysicsScene2D::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene2D::*)()>(&UnityEngine::PhysicsScene2D::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene2D::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene2D::*)(::Il2CppObject*)>(&UnityEngine::PhysicsScene2D::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene2D), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
