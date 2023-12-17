#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CRC32C)
// Forward declare root types
namespace LiteNetLib::Utils {
class CRC32C;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::CRC32C);
// Type: LiteNetLib.Utils::CRC32C
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14188))
// CS Name: ::LiteNetLib.Utils::CRC32C*
class CORDL_TYPE CRC32C : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field ChecksumSize offset 0x0
static constexpr int32_t  ChecksumSize{static_cast<int32_t>(0x4)};

/// @brief Field Poly offset 0x0
static constexpr uint32_t  Poly{static_cast<uint32_t>(0xf63b78f0u)};

static inline void setStaticF_Table(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_Table() ;

/// @brief Method Compute addr 0x220832c size 0x410 virtual false final false
static inline uint32_t Compute(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  offset, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "CRC32C", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CRC32C(CRC32C && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CRC32C", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CRC32C(CRC32C const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CRC32C()  = default;
public:


// Fields

// Static field Table


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::CRC32C, 0x10>, "Size mismatch!");

} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::CRC32C);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::CRC32C*, "LiteNetLib.Utils", "CRC32C");
