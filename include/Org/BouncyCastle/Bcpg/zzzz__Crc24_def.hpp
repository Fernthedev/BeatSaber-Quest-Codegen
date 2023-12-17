#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Crc24)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Crc24);
// Type: Org.BouncyCastle.Bcpg::Crc24
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(561))
// CS Name: ::Org.BouncyCastle.Bcpg::Crc24*
class CORDL_TYPE Crc24 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field Crc24Init offset 0x0
static constexpr int32_t  Crc24Init{static_cast<int32_t>(0xb704ce)};

/// @brief Field Crc24Poly offset 0x0
static constexpr int32_t  Crc24Poly{static_cast<int32_t>(0x1864cfb)};

/// @brief Field crc offset 0x10
 __declspec(property(get=__get_crc, put=__set_crc)) int32_t  crc;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_crc(int32_t  value) ;

constexpr int32_t& __get_crc() ;

constexpr int32_t const& __get_crc() const;

static inline ::Org::BouncyCastle::Bcpg::Crc24* New_ctor() ;

/// @brief Method .ctor addr 0x11c97c0 size 0x14 virtual false final false
inline void _ctor() ;

/// @brief Method Update addr 0x11ca494 size 0x38 virtual false final false
inline void Update(int32_t  b) ;

/// @brief Method GetValue addr 0x11d04d4 size 0x8 virtual false final false
inline int32_t GetValue() ;

/// @brief Method get_Value addr 0x11d04dc size 0x8 virtual false final false
inline int32_t get_Value() ;

/// @brief Method Reset addr 0x11ca484 size 0x10 virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "Crc24", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Crc24(Crc24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Crc24", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Crc24(Crc24 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Crc24()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Crc24, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Crc24);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Crc24*, "Org.BouncyCastle.Bcpg", "Crc24");
