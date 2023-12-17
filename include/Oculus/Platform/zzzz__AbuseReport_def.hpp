#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AbuseReport)
namespace Oculus::Platform {
template<typename T>
class __Message_1__Callback;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class AbuseReport;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AbuseReport);
// Type: Oculus.Platform::AbuseReport
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13354))
// CS Name: ::Oculus.Platform::AbuseReport*
class CORDL_TYPE AbuseReport : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ReportRequestHandled addr 0x26cd0a0 size 0x14c virtual false final false
static inline ::Oculus::Platform::Request* ReportRequestHandled(::Oculus::Platform::ReportRequestResponse  response) ;

/// @brief Method SetReportButtonPressedNotificationCallback addr 0x26cd2dc size 0x74 virtual false final false
static inline void SetReportButtonPressedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>*  callback) ;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbuseReport(AbuseReport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbuseReport(AbuseReport const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AbuseReport()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AbuseReport, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AbuseReport);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReport*, "Oculus.Platform", "AbuseReport");
