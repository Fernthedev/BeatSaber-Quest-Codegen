// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpFieldElement
#include "Org/BouncyCastle/Math/EC/AbstractFpFieldElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Skipping declaration: ECFieldElement because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement
  // [TokenAttribute] Offset: FFFFFFFF
  class SecP256K1FieldElement : public Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
    public:
    // protected internal readonly System.UInt32[] x
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* x;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: SecP256K1FieldElement
    SecP256K1FieldElement(::Array<uint>* x_ = {}) noexcept : x{x_} {}
    // Creating conversion operator: operator ::Array<uint>*
    constexpr operator ::Array<uint>*() const noexcept {
      return x;
    }
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Q
    static Org::BouncyCastle::Math::BigInteger* _get_Q();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Q
    static void _set_Q(Org::BouncyCastle::Math::BigInteger* value);
    // Get instance field reference: protected internal readonly System.UInt32[] x
    ::Array<uint>*& dyn_x();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1E3448C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP256K1FieldElement* New_ctor(Org::BouncyCastle::Math::BigInteger* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP256K1FieldElement*, creationType>(x)));
    }
    // protected internal System.Void .ctor(System.UInt32[] x)
    // Offset: 0x1E34AA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP256K1FieldElement* New_ctor(::Array<uint>* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP256K1FieldElement*, creationType>(x)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E36A9C
    static void _cctor();
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement other)
    // Offset: 0x1E369AC
    bool Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement* other);
    // public override System.Boolean get_IsZero()
    // Offset: 0x1E35E84
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsZero()
    bool get_IsZero();
    // public override System.Boolean get_IsOne()
    // Offset: 0x1E35E90
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsOne()
    bool get_IsOne();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1E35ED0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override System.Boolean TestBitZero()
    // Offset: 0x1E35E9C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::TestBitZero()
    bool TestBitZero();
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x1E35EC4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E35F44
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x1E36034
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E360D8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E361C8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E362B8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x1E363B0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x1E36454
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x1E364F8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x1E3659C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1E36874
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Boolean Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    // Offset: 0x1E36910
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1E369D8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement
  #pragma pack(pop)
  static check_size<sizeof(SecP256K1FieldElement), 16 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecP256K1FieldElementSizeCheck;
  static_assert(sizeof(SecP256K1FieldElement) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP256K1FieldElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP256K1FieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::get_IsZero
// Il2CppName: get_IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::get_IsZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "get_IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::get_IsOne
// Il2CppName: get_IsOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::get_IsOne)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "get_IsOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::get_FieldSize
// Il2CppName: get_FieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::get_FieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::TestBitZero
// Il2CppName: TestBitZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::TestBitZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "TestBitZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::ToBigInteger
// Il2CppName: ToBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::ToBigInteger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "ToBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Add)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::AddOne)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Subtract)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Multiply)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Divide
// Il2CppName: Divide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Divide)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Divide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Negate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Square)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Invert)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Sqrt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
