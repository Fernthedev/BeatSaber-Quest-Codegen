#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleBigDecimal)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class SimpleBigDecimal;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal);
// Type: Org.BouncyCastle.Math.EC.Abc::SimpleBigDecimal
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1356))
// CS Name: ::Org.BouncyCastle.Math.EC.Abc::SimpleBigDecimal*
class CORDL_TYPE SimpleBigDecimal : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field bigInt offset 0x10
 __declspec(property(get=__get_bigInt, put=__set_bigInt)) ::Org::BouncyCastle::Math::BigInteger*  bigInt;

/// @brief Field scale offset 0x18
 __declspec(property(get=__get_scale, put=__set_scale)) int32_t  scale;

 __declspec(property(get=get_IntValue)) int32_t  IntValue;

 __declspec(property(get=get_LongValue)) int64_t  LongValue;

 __declspec(property(get=get_Scale)) int32_t  Scale;

constexpr void __set_bigInt(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_bigInt() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_bigInt() const;

constexpr void __set_scale(int32_t  value) ;

constexpr int32_t& __get_scale() ;

constexpr int32_t const& __get_scale() const;

/// @brief Method GetInstance addr 0xfc6658 size 0x84 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* GetInstance(::Org::BouncyCastle::Math::BigInteger*  val, int32_t  scale) ;

static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* New_ctor(::Org::BouncyCastle::Math::BigInteger*  bigInt, int32_t  scale) ;

/// @brief Method .ctor addr 0xfc66dc size 0x80 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  bigInt, int32_t  scale) ;

static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* New_ctor(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  limBigDec) ;

/// @brief Method .ctor addr 0xfc675c size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  limBigDec) ;

/// @brief Method CheckScale addr 0xfc6798 size 0x70 virtual false final false
inline void CheckScale(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  b) ;

/// @brief Method AdjustScale addr 0xfc6808 size 0xe0 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* AdjustScale(int32_t  newScale) ;

/// @brief Method Add addr 0xfc68e8 size 0x98 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  b) ;

/// @brief Method Add addr 0xfc6980 size 0xa0 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(::Org::BouncyCastle::Math::BigInteger*  b) ;

/// @brief Method Negate addr 0xfc6a20 size 0x80 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Negate() ;

/// @brief Method Subtract addr 0xfc6aa0 size 0x28 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  b) ;

/// @brief Method Subtract addr 0xfc6ac8 size 0xa0 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(::Org::BouncyCastle::Math::BigInteger*  b) ;

/// @brief Method Multiply addr 0xfc6b68 size 0x98 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  b) ;

/// @brief Method Multiply addr 0xfc6c00 size 0x88 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(::Org::BouncyCastle::Math::BigInteger*  b) ;

/// @brief Method Divide addr 0xfc6c88 size 0xa8 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  b) ;

/// @brief Method Divide addr 0xfc6d30 size 0x88 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(::Org::BouncyCastle::Math::BigInteger*  b) ;

/// @brief Method ShiftLeft addr 0xfc6db8 size 0x88 virtual false final false
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ShiftLeft(int32_t  n) ;

/// @brief Method CompareTo addr 0xfc6e40 size 0x38 virtual false final false
inline int32_t CompareTo(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  val) ;

/// @brief Method CompareTo addr 0xfc6e78 size 0x3c virtual false final false
inline int32_t CompareTo(::Org::BouncyCastle::Math::BigInteger*  val) ;

/// @brief Method Floor addr 0xfc6eb4 size 0x24 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* Floor() ;

/// @brief Method Round addr 0xfc6ed8 size 0xbc virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* Round() ;

/// @brief Method get_IntValue addr 0xfc6f94 size 0x1c virtual false final false
inline int32_t get_IntValue() ;

/// @brief Method get_LongValue addr 0xfc6fb0 size 0x1c virtual false final false
inline int64_t get_LongValue() ;

/// @brief Method get_Scale addr 0xfc6fcc size 0x8 virtual false final false
inline int32_t get_Scale() ;

/// @brief Method ToString addr 0xfc6fd4 size 0x2fc virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0xfc72d0 size 0xc4 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0xfc7394 size 0x30 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleBigDecimal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleBigDecimal(SimpleBigDecimal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleBigDecimal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleBigDecimal(SimpleBigDecimal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleBigDecimal()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, "Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal");
