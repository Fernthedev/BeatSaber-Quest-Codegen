// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerUtcTime
  class DerUtcTime : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.String time
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* time;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DerUtcTime
    DerUtcTime(::Il2CppString* time_ = {}) noexcept : time{time_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return time;
    }
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x16F3A50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerUtcTime* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerUtcTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerUtcTime*, creationType>(bytes)));
    }
    // public System.DateTime ToAdjustedDateTime()
    // Offset: 0x1704198
    System::DateTime ToAdjustedDateTime();
    // private System.DateTime ParseDateString(System.String dateStr, System.String formatStr)
    // Offset: 0x1704278
    System::DateTime ParseDateString(::Il2CppString* dateStr, ::Il2CppString* formatStr);
    // public System.String get_TimeString()
    // Offset: 0x170433C
    ::Il2CppString* get_TimeString();
    // public System.String get_AdjustedTimeString()
    // Offset: 0x17041F0
    ::Il2CppString* get_AdjustedTimeString();
    // private System.Byte[] GetOctets()
    // Offset: 0x17046F4
    ::Array<uint8_t>* GetOctets();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1704700
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x170473C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x17047F0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // public override System.String ToString()
    // Offset: 0x170480C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.DerUtcTime
  #pragma pack(pop)
  static check_size<sizeof(DerUtcTime), 16 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Asn1_DerUtcTimeSizeCheck;
  static_assert(sizeof(DerUtcTime) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerUtcTime*, "Org.BouncyCastle.Asn1", "DerUtcTime");
// Writing includes for template specializations
#include "Org/BouncyCastle/Asn1/DerOutputStream.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::ToAdjustedDateTime
// Il2CppName: ToAdjustedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::ToAdjustedDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "ToAdjustedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::ParseDateString
// Il2CppName: ParseDateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::Asn1::DerUtcTime::*)(::Il2CppString*, ::Il2CppString*)>(&Org::BouncyCastle::Asn1::DerUtcTime::ParseDateString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "ParseDateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::get_TimeString
// Il2CppName: get_TimeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::get_TimeString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "get_TimeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::get_AdjustedTimeString
// Il2CppName: get_AdjustedTimeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::get_AdjustedTimeString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "get_AdjustedTimeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::GetOctets
// Il2CppName: GetOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::GetOctets)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "GetOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerUtcTime::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerUtcTime::Encode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::DerOutputStream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerUtcTime::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerUtcTime::Asn1Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::Asn1Object*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::Asn1GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
