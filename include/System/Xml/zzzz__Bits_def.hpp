#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Bits)
// Forward declare root types
namespace System::Xml {
class Bits;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Bits);
// Type: System.Xml::Bits
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11409))
// CS Name: ::System.Xml::Bits*
class CORDL_TYPE Bits : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_MASK_0101010101010101(uint32_t  value) ;

static inline uint32_t getStaticF_MASK_0101010101010101() ;

static inline void setStaticF_MASK_0011001100110011(uint32_t  value) ;

static inline uint32_t getStaticF_MASK_0011001100110011() ;

static inline void setStaticF_MASK_0000111100001111(uint32_t  value) ;

static inline uint32_t getStaticF_MASK_0000111100001111() ;

static inline void setStaticF_MASK_0000000011111111(uint32_t  value) ;

static inline uint32_t getStaticF_MASK_0000000011111111() ;

static inline void setStaticF_MASK_1111111111111111(uint32_t  value) ;

static inline uint32_t getStaticF_MASK_1111111111111111() ;

/// @brief Method Count addr 0x284e6d0 size 0x9c virtual false final false
static inline int32_t Count(uint32_t  num) ;

/// @brief Method LeastPosition addr 0x284e76c size 0x6c virtual false final false
static inline int32_t LeastPosition(uint32_t  num) ;

// Ctor Parameters [CppParam { name: "", ty: "Bits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Bits(Bits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bits(Bits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Bits()  = default;
public:


// Fields

// Static field MASK_0101010101010101

// Static field MASK_0011001100110011

// Static field MASK_0000111100001111

// Static field MASK_0000000011111111

// Static field MASK_1111111111111111


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Bits, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::Bits);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Bits*, "System.Xml", "Bits");
