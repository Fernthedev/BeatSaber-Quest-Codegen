// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Math
namespace Mono::Math {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.BigInteger
  class BigInteger : public ::Il2CppObject {
    public:
    // Nested type: Mono::Math::BigInteger::Sign
    struct Sign;
    // Nested type: Mono::Math::BigInteger::ModulusRing
    class ModulusRing;
    // Nested type: Mono::Math::BigInteger::Kernel
    class Kernel;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Mono.Math.BigInteger/Sign
    struct Sign/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Sign
      constexpr Sign(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Mono.Math.BigInteger/Sign Negative
      static constexpr const int Negative = -1;
      // Get static field: static public Mono.Math.BigInteger/Sign Negative
      static Mono::Math::BigInteger::Sign _get_Negative();
      // Set static field: static public Mono.Math.BigInteger/Sign Negative
      static void _set_Negative(Mono::Math::BigInteger::Sign value);
      // static field const value: static public Mono.Math.BigInteger/Sign Zero
      static constexpr const int Zero = 0;
      // Get static field: static public Mono.Math.BigInteger/Sign Zero
      static Mono::Math::BigInteger::Sign _get_Zero();
      // Set static field: static public Mono.Math.BigInteger/Sign Zero
      static void _set_Zero(Mono::Math::BigInteger::Sign value);
      // static field const value: static public Mono.Math.BigInteger/Sign Positive
      static constexpr const int Positive = 1;
      // Get static field: static public Mono.Math.BigInteger/Sign Positive
      static Mono::Math::BigInteger::Sign _get_Positive();
      // Set static field: static public Mono.Math.BigInteger/Sign Positive
      static void _set_Positive(Mono::Math::BigInteger::Sign value);
    }; // Mono.Math.BigInteger/Sign
    #pragma pack(pop)
    static check_size<sizeof(BigInteger::Sign), 0 + sizeof(int)> __Mono_Math_BigInteger_SignSizeCheck;
    static_assert(sizeof(BigInteger::Sign) == 0x4);
    // private System.UInt32 length
    // Size: 0x4
    // Offset: 0x10
    uint length;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: length and: data
    char __padding0[0x4] = {};
    // private System.UInt32[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* data;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: BigInteger
    BigInteger(uint length_ = {}, ::Array<uint>* data_ = {}) noexcept : length{length_}, data{data_} {}
    // Get static field: static readonly System.UInt32[] smallPrimes
    static ::Array<uint>* _get_smallPrimes();
    // Set static field: static readonly System.UInt32[] smallPrimes
    static void _set_smallPrimes(::Array<uint>* value);
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static System::Security::Cryptography::RandomNumberGenerator* _get_rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static void _set_rng(System::Security::Cryptography::RandomNumberGenerator* value);
    // public System.Void .ctor(Mono.Math.BigInteger/Sign sign, System.UInt32 len)
    // Offset: 0x1D6B420
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(Mono::Math::BigInteger::Sign sign, uint len) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(sign, len)));
    }
    // public System.Void .ctor(Mono.Math.BigInteger bi)
    // Offset: 0x1D6B49C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(Mono::Math::BigInteger* bi) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(bi)));
    }
    // public System.Void .ctor(Mono.Math.BigInteger bi, System.UInt32 len)
    // Offset: 0x1D6B54C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(Mono::Math::BigInteger* bi, uint len) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(bi, len)));
    }
    // public System.Void .ctor(System.Byte[] inData)
    // Offset: 0x1D6B634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(::Array<uint8_t>* inData) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(inData)));
    }
    // public System.Void .ctor(System.UInt32 ui)
    // Offset: 0x1D6B928
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(uint ui) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(ui)));
    }
    // static private System.Security.Cryptography.RandomNumberGenerator get_Rng()
    // Offset: 0x1D6CBE4
    static System::Security::Cryptography::RandomNumberGenerator* get_Rng();
    // static public Mono.Math.BigInteger GenerateRandom(System.Int32 bits, System.Security.Cryptography.RandomNumberGenerator rng)
    // Offset: 0x1D6CCAC
    static Mono::Math::BigInteger* GenerateRandom(int bits, System::Security::Cryptography::RandomNumberGenerator* rng);
    // static public Mono.Math.BigInteger GenerateRandom(System.Int32 bits)
    // Offset: 0x1D6CE34
    static Mono::Math::BigInteger* GenerateRandom(int bits);
    // public System.Int32 BitCount()
    // Offset: 0x1D6CEA0
    int BitCount();
    // public System.Boolean TestBit(System.Int32 bitNum)
    // Offset: 0x1D6CF20
    bool TestBit(int bitNum);
    // public System.Void SetBit(System.UInt32 bitNum)
    // Offset: 0x1D6CFF0
    void SetBit(uint bitNum);
    // public System.Void SetBit(System.UInt32 bitNum, System.Boolean value)
    // Offset: 0x1D6CFF8
    void SetBit(uint bitNum, bool value);
    // public System.Int32 LowestSetBit()
    // Offset: 0x1D6D060
    int LowestSetBit();
    // public System.Byte[] GetBytes()
    // Offset: 0x1D6D0EC
    ::Array<uint8_t>* GetBytes();
    // public System.String ToString(System.UInt32 radix)
    // Offset: 0x1D6D4AC
    ::Il2CppString* ToString(uint radix);
    // public System.String ToString(System.UInt32 radix, System.String characterSet)
    // Offset: 0x1D6D50C
    ::Il2CppString* ToString(uint radix, ::Il2CppString* characterSet);
    // private System.Void Normalize()
    // Offset: 0x1D6B8C4
    void Normalize();
    // public Mono.Math.BigInteger ModInverse(Mono.Math.BigInteger modulus)
    // Offset: 0x1D6D950
    Mono::Math::BigInteger* ModInverse(Mono::Math::BigInteger* modulus);
    // static public Mono.Math.BigInteger GeneratePseudoPrime(System.Int32 bits)
    // Offset: 0x1D6DE78
    static Mono::Math::BigInteger* GeneratePseudoPrime(int bits);
    // public System.Void Incr2()
    // Offset: 0x1D6DEF4
    void Incr2();
    // static private System.Void .cctor()
    // Offset: 0x1D6DFC4
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D6D790
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1D6D7F4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1D6D7FC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
  }; // Mono.Math.BigInteger
  #pragma pack(pop)
  static check_size<sizeof(BigInteger), 24 + sizeof(::Array<uint>*)> __Mono_Math_BigIntegerSizeCheck;
  static_assert(sizeof(BigInteger) == 0x20);
  // static public Mono.Math.BigInteger op_Subtraction(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6BAC0
  Mono::Math::BigInteger* operator-(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.UInt32 op_Modulus(Mono.Math.BigInteger bi, System.UInt32 ui)
  // Offset: 0x1D6BFCC
  uint operator%(Mono::Math::BigInteger& bi, const uint& ui);
  // static public Mono.Math.BigInteger op_Modulus(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6C048
  Mono::Math::BigInteger* operator%(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public Mono.Math.BigInteger op_Division(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6C554
  Mono::Math::BigInteger* operator/(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public Mono.Math.BigInteger op_Multiply(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6C588
  Mono::Math::BigInteger* operator*(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public Mono.Math.BigInteger op_LeftShift(Mono.Math.BigInteger bi1, System.Int32 shiftVal)
  // Offset: 0x1D6C848
  Mono::Math::BigInteger* operator<<(Mono::Math::BigInteger& bi1, const int& shiftVal);
  // static public Mono.Math.BigInteger op_RightShift(Mono.Math.BigInteger bi1, System.Int32 shiftVal)
  // Offset: 0x1D6CA30
  Mono::Math::BigInteger* operator>>(Mono::Math::BigInteger& bi1, const int& shiftVal);
  // static public System.Boolean op_Equality(Mono.Math.BigInteger bi1, System.UInt32 ui)
  // Offset: 0x1D6BC40
  bool operator ==(Mono::Math::BigInteger& bi1, const uint& ui);
  // static public System.Boolean op_Inequality(Mono.Math.BigInteger bi1, System.UInt32 ui)
  // Offset: 0x1D6D228
  bool operator !=(Mono::Math::BigInteger& bi1, const uint& ui);
  // static public System.Boolean op_Equality(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6D2A0
  bool operator ==(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_Inequality(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6D370
  bool operator !=(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_GreaterThan(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6D440
  bool operator >(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_LessThan(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6D45C
  bool operator <(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_GreaterThanOrEqual(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6D474
  bool operator >=(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_LessThanOrEqual(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1D6D490
  bool operator <=(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::BigInteger*, "Mono.Math", "BigInteger");
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::BigInteger::Sign, "Mono.Math", "BigInteger/Sign");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::BigInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger::get_Rng
// Il2CppName: get_Rng
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RandomNumberGenerator* (*)()>(&Mono::Math::BigInteger::get_Rng)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "get_Rng", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::GenerateRandom
// Il2CppName: GenerateRandom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (*)(int, System::Security::Cryptography::RandomNumberGenerator*)>(&Mono::Math::BigInteger::GenerateRandom)> {
  const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rng = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RandomNumberGenerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "GenerateRandom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits, rng});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::GenerateRandom
// Il2CppName: GenerateRandom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (*)(int)>(&Mono::Math::BigInteger::GenerateRandom)> {
  const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "GenerateRandom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::BitCount
// Il2CppName: BitCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::BitCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "BitCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::TestBit
// Il2CppName: TestBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger::*)(int)>(&Mono::Math::BigInteger::TestBit)> {
  const MethodInfo* get() {
    static auto* bitNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "TestBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitNum});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::SetBit
// Il2CppName: SetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(uint)>(&Mono::Math::BigInteger::SetBit)> {
  const MethodInfo* get() {
    static auto* bitNum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "SetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitNum});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::SetBit
// Il2CppName: SetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(uint, bool)>(&Mono::Math::BigInteger::SetBit)> {
  const MethodInfo* get() {
    static auto* bitNum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "SetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitNum, value});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::LowestSetBit
// Il2CppName: LowestSetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::LowestSetBit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "LowestSetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::GetBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Math::BigInteger::*)(uint)>(&Mono::Math::BigInteger::ToString)> {
  const MethodInfo* get() {
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radix});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Math::BigInteger::*)(uint, ::Il2CppString*)>(&Mono::Math::BigInteger::ToString)> {
  const MethodInfo* get() {
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* characterSet = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radix, characterSet});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::Normalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::ModInverse
// Il2CppName: ModInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (Mono::Math::BigInteger::*)(Mono::Math::BigInteger*)>(&Mono::Math::BigInteger::ModInverse)> {
  const MethodInfo* get() {
    static auto* modulus = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "ModInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modulus});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::GeneratePseudoPrime
// Il2CppName: GeneratePseudoPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (*)(int)>(&Mono::Math::BigInteger::GeneratePseudoPrime)> {
  const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "GeneratePseudoPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Incr2
// Il2CppName: Incr2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::Incr2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "Incr2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Math::BigInteger::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger::*)(::Il2CppObject*)>(&Mono::Math::BigInteger::Equals)> {
  const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator%
// Il2CppName: op_Modulus
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator%
// Il2CppName: op_Modulus
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator<<
// Il2CppName: op_LeftShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator>>
// Il2CppName: op_RightShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
