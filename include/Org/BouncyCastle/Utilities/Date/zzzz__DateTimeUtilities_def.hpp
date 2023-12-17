#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeUtilities)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities);
// Type: Org.BouncyCastle.Utilities.Date::DateTimeUtilities
namespace Org::BouncyCastle::Utilities::Date {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1792))
// CS Name: ::Org.BouncyCastle.Utilities.Date::DateTimeUtilities*
class CORDL_TYPE DateTimeUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_UnixEpoch(::System::DateTime  value) ;

static inline ::System::DateTime getStaticF_UnixEpoch() ;

static inline ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities* New_ctor() ;

/// @brief Method .ctor addr 0x115b73c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method DateTimeToUnixMs addr 0x115b744 size 0x15c virtual false final false
static inline int64_t DateTimeToUnixMs(::System::DateTime  dateTime) ;

/// @brief Method UnixMsToDateTime addr 0x115b8a0 size 0x94 virtual false final false
static inline ::System::DateTime UnixMsToDateTime(int64_t  unixMs) ;

/// @brief Method CurrentUnixMs addr 0x115b934 size 0x84 virtual false final false
static inline int64_t CurrentUnixMs() ;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeUtilities(DateTimeUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeUtilities(DateTimeUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DateTimeUtilities()  = default;
public:


// Fields

// Static field UnixEpoch


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Date
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*, "Org.BouncyCastle.Utilities.Date", "DateTimeUtilities");
