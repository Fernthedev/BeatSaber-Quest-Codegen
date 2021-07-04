// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/<GetDirectChildren>d__21
  // [CompilerGeneratedAttribute] Offset: DDD5DC
  class UnityUtil::$GetDirectChildren$d__21 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject <>2__current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: obj
    char __padding2[0x4] = {};
    // private UnityEngine.GameObject obj
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject <>3__obj
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* $$3__obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::IEnumerator* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $GetDirectChildren$d__21
    $GetDirectChildren$d__21(int $$1__state_ = {}, UnityEngine::GameObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::GameObject* obj_ = {}, UnityEngine::GameObject* $$3__obj_ = {}, System::Collections::IEnumerator* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, obj{obj_}, $$3__obj{$$3__obj_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x138583C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$GetDirectChildren$d__21* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$GetDirectChildren$d__21*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1385D34
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1385E1C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1385D50
    void $$m__Finally1();
    // private UnityEngine.GameObject System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current()
    // Offset: 0x138607C
    UnityEngine::GameObject* System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1386084
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x13860E4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
    // Offset: 0x13860EC
    System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1386198
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/<GetDirectChildren>d__21
  #pragma pack(pop)
  static check_size<sizeof(UnityUtil::$GetDirectChildren$d__21), 56 + sizeof(System::Collections::IEnumerator*)> __ModestTree_Util_UnityUtil_$GetDirectChildren$d__21SizeCheck;
  static_assert(sizeof(UnityUtil::$GetDirectChildren$d__21) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*, "ModestTree.Util", "UnityUtil/<GetDirectChildren>d__21");
// Writing includes for template specializations
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::$$m__Finally1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>* (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
