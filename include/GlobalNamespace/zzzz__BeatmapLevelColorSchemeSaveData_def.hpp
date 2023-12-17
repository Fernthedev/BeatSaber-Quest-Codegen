#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelColorSchemeSaveData)
namespace GlobalNamespace {
class __PlayerSaveData__ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelColorSchemeSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelColorSchemeSaveData);
// Type: ::BeatmapLevelColorSchemeSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4326))
// CS Name: ::BeatmapLevelColorSchemeSaveData*
class CORDL_TYPE BeatmapLevelColorSchemeSaveData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field useOverride offset 0x10
 __declspec(property(get=__get_useOverride, put=__set_useOverride)) bool  useOverride;

/// @brief Field colorScheme offset 0x18
 __declspec(property(get=__get_colorScheme, put=__set_colorScheme)) ::GlobalNamespace::__PlayerSaveData__ColorScheme*  colorScheme;

constexpr void __set_useOverride(bool  value) ;

constexpr bool& __get_useOverride() ;

constexpr bool const& __get_useOverride() const;

constexpr void __set_colorScheme(::GlobalNamespace::__PlayerSaveData__ColorScheme*  value) ;

constexpr ::GlobalNamespace::__PlayerSaveData__ColorScheme* __get_colorScheme() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorScheme*> __get_colorScheme() const;

/// @brief Method IsDefault addr 0x233dd28 size 0x15c virtual false final false
inline bool IsDefault() ;

static inline ::GlobalNamespace::BeatmapLevelColorSchemeSaveData* New_ctor() ;

/// @brief Method .ctor addr 0x233de84 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelColorSchemeSaveData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelColorSchemeSaveData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelColorSchemeSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, "", "BeatmapLevelColorSchemeSaveData");
