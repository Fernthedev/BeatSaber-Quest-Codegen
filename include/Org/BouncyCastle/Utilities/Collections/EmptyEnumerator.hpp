// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.EmptyEnumerator
  class EmptyEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // Creating value type constructor for type: EmptyEnumerator
    EmptyEnumerator() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Get static field: static public readonly System.Collections.IEnumerator Instance
    static System::Collections::IEnumerator* _get_Instance();
    // Set static field: static public readonly System.Collections.IEnumerator Instance
    static void _set_Instance(System::Collections::IEnumerator* value);
    // public System.Boolean MoveNext()
    // Offset: 0x137F590
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x137F598
    void Reset();
    // public System.Object get_Current()
    // Offset: 0x137F59C
    ::Il2CppObject* get_Current();
    // static private System.Void .cctor()
    // Offset: 0x137F608
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x137F588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyEnumerator*, creationType>()));
    }
  }; // Org.BouncyCastle.Utilities.Collections.EmptyEnumerator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
