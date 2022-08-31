// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mFieldElement
  class AbstractF2mFieldElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*, "Org.BouncyCastle.Math.EC", "AbstractF2mFieldElement");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractF2mFieldElement : public ::Org::BouncyCastle::Math::EC::ECFieldElement {
    public:
    // public System.Boolean get_HasFastTrace()
    // Offset: 0x22E12A0
    bool get_HasFastTrace();
    // public Org.BouncyCastle.Math.EC.ECFieldElement HalfTrace()
    // Offset: 0x22E1148
    ::Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();
    // public System.Int32 Trace()
    // Offset: 0x22E12A8
    int Trace();
    // protected System.Void .ctor()
    // Offset: 0x22E1414
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Void ECFieldElement::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractF2mFieldElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractF2mFieldElement*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::get_HasFastTrace
// Il2CppName: get_HasFastTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::get_HasFastTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*), "get_HasFastTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::HalfTrace
// Il2CppName: HalfTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::HalfTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*), "HalfTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::Trace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
