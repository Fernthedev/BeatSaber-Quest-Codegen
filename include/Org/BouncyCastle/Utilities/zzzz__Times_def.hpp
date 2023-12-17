#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Times)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Times;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Times);
// Type: Org.BouncyCastle.Utilities::Times
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1838))
// CS Name: ::Org.BouncyCastle.Utilities::Times*
class CORDL_TYPE Times : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_NanosecondsPerTick(int64_t  value) ;

static inline int64_t getStaticF_NanosecondsPerTick() ;

/// @brief Method NanoTime addr 0x116ebe8 size 0xa4 virtual false final false
static inline int64_t NanoTime() ;

static inline ::Org::BouncyCastle::Utilities::Times* New_ctor() ;

/// @brief Method .ctor addr 0x116ecd8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Times", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Times(Times && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Times", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Times(Times const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Times()  = default;
public:


// Fields

// Static field NanosecondsPerTick


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Times, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Times);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Times*, "Org.BouncyCastle.Utilities", "Times");
