#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetPresetUtility)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetPresetUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetPresetUtility);
// Type: HoudiniEngineUnity::HEU_AssetPresetUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9614))
// CS Name: ::HoudiniEngineUnity::HEU_AssetPresetUtility*
class CORDL_TYPE HEU_AssetPresetUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_PRESET_IDENTIFIER(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_PRESET_IDENTIFIER() ;

static inline void setStaticF_PRESET_VERSION(int32_t  value) ;

static inline int32_t getStaticF_PRESET_VERSION() ;

/// @brief Method SaveAssetPresetToFile addr 0x214e9ac size 0x640 virtual false final false
static inline void SaveAssetPresetToFile(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  filePath) ;

/// @brief Method LoadPresetFileIntoAssetAndCook addr 0x214f7d8 size 0x668 virtual false final false
static inline void LoadPresetFileIntoAssetAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  filePath) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPresetUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_AssetPresetUtility(HEU_AssetPresetUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPresetUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_AssetPresetUtility(HEU_AssetPresetUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_AssetPresetUtility()  = default;
public:


// Fields

// Static field PRESET_IDENTIFIER

// Static field PRESET_VERSION


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetPresetUtility, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetPresetUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetPresetUtility*, "HoudiniEngineUnity", "HEU_AssetPresetUtility");
