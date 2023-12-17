#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Ucs4Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Decoder4321)
// Forward declare root types
namespace System::Xml {
class Ucs4Decoder4321;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Decoder4321);
// Type: System.Xml::Ucs4Decoder4321
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11562))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11563))
// CS Name: ::System.Xml::Ucs4Decoder4321*
class CORDL_TYPE Ucs4Decoder4321 : public ::System::Xml::Ucs4Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Xml::Ucs4Decoder)]{};

/// @brief Method GetFullChars addr 0x28a66e4 size 0x214 virtual true final false
inline int32_t GetFullChars(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex) ;

static inline ::System::Xml::Ucs4Decoder4321* New_ctor() ;

/// @brief Method .ctor addr 0x28a6080 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder4321", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ucs4Decoder4321(Ucs4Decoder4321 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder4321", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ucs4Decoder4321(Ucs4Decoder4321 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Ucs4Decoder4321()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Decoder4321, 0x30>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Decoder4321);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Decoder4321*, "System.Xml", "Ucs4Decoder4321");
