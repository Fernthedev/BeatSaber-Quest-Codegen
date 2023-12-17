#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedAbuseReportOptions)
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
// Forward declare root types
namespace Oculus::Platform {
class AdvancedAbuseReportOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AdvancedAbuseReportOptions);
// Type: Oculus.Platform::AdvancedAbuseReportOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13226))
// CS Name: ::Oculus.Platform::AdvancedAbuseReportOptions*
class CORDL_TYPE AdvancedAbuseReportOptions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field Handle offset 0x10
 __declspec(property(get=__get_Handle, put=__set_Handle)) ::cordl_internals::intptr_t  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Handle() ;

constexpr ::cordl_internals::intptr_t const& __get_Handle() const;

static inline ::Oculus::Platform::AdvancedAbuseReportOptions* New_ctor() ;

/// @brief Method .ctor addr 0x26cdb90 size 0x64 virtual false final false
inline void _ctor() ;

/// @brief Method SetDeveloperDefinedContext addr 0x26cdc5c size 0x70 virtual false final false
inline void SetDeveloperDefinedContext(::StringW  key, ::StringW  value) ;

/// @brief Method ClearDeveloperDefinedContext addr 0x26cdd8c size 0x58 virtual false final false
inline void ClearDeveloperDefinedContext() ;

/// @brief Method SetObjectType addr 0x26cde60 size 0x68 virtual false final false
inline void SetObjectType(::StringW  value) ;

/// @brief Method SetReportType addr 0x26cdf68 size 0x68 virtual false final false
inline void SetReportType(::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method AddSuggestedUser addr 0x26ce054 size 0x68 virtual false final false
inline void AddSuggestedUser(uint64_t  userID) ;

/// @brief Method ClearSuggestedUsers addr 0x26ce140 size 0x58 virtual false final false
inline void ClearSuggestedUsers() ;

/// @brief Method SetVideoMode addr 0x26ce214 size 0x68 virtual false final false
inline void SetVideoMode(::Oculus::Platform::AbuseReportVideoMode  value) ;

/// @brief Method op_Explicit addr 0x26ce300 size 0x58 virtual false final false
static inline ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::AdvancedAbuseReportOptions*  options) ;

/// @brief Method Finalize addr 0x26ce358 size 0xd4 virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedAbuseReportOptions(AdvancedAbuseReportOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedAbuseReportOptions(AdvancedAbuseReportOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AdvancedAbuseReportOptions()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AdvancedAbuseReportOptions, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AdvancedAbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AdvancedAbuseReportOptions*, "Oculus.Platform", "AdvancedAbuseReportOptions");
