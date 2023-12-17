#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbuseReportRecording)
// Forward declare root types
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AbuseReportRecording);
// Type: Oculus.Platform.Models::AbuseReportRecording
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13406))
// CS Name: ::Oculus.Platform.Models::AbuseReportRecording*
class CORDL_TYPE AbuseReportRecording : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field RecordingUuid offset 0x10
 __declspec(property(get=__get_RecordingUuid, put=__set_RecordingUuid)) ::StringW  RecordingUuid;

constexpr void __set_RecordingUuid(::StringW  value) ;

constexpr ::StringW& __get_RecordingUuid() ;

constexpr ::StringW const& __get_RecordingUuid() const;

static inline ::Oculus::Platform::Models::AbuseReportRecording* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x27036c8 size 0x78 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportRecording", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbuseReportRecording(AbuseReportRecording && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportRecording", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbuseReportRecording(AbuseReportRecording const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AbuseReportRecording()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AbuseReportRecording, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AbuseReportRecording);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AbuseReportRecording*, "Oculus.Platform.Models", "AbuseReportRecording");
