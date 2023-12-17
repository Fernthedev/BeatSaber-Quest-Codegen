#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettings)
namespace GlobalNamespace {
class RecordingSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettings);
// Type: ::RecordingToolSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5967))
// CS Name: ::RecordingToolSettings*
class CORDL_TYPE RecordingToolSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field recordingSettings offset 0x10
 __declspec(property(get=__get_recordingSettings, put=__set_recordingSettings)) ::ArrayW<::GlobalNamespace::RecordingSettings*,::Array<::GlobalNamespace::RecordingSettings*>*>  recordingSettings;

constexpr void __set_recordingSettings(::ArrayW<::GlobalNamespace::RecordingSettings*,::Array<::GlobalNamespace::RecordingSettings*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*,::Array<::GlobalNamespace::RecordingSettings*>*>& __get_recordingSettings() ;

constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*,::Array<::GlobalNamespace::RecordingSettings*>*> const& __get_recordingSettings() const;

static inline ::GlobalNamespace::RecordingToolSettings* New_ctor(::ArrayW<::GlobalNamespace::RecordingSettings*,::Array<::GlobalNamespace::RecordingSettings*>*>  recordingSettings) ;

/// @brief Method .ctor addr 0x23079e4 size 0x28 virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::RecordingSettings*,::Array<::GlobalNamespace::RecordingSettings*>*>  recordingSettings) ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolSettings(RecordingToolSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolSettings(RecordingToolSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolSettings()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettings, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettings*, "", "RecordingToolSettings");
