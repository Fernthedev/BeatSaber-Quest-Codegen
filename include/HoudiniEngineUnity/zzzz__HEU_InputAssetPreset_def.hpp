#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_InputAssetPreset)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputAssetPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputAssetPreset);
// Type: HoudiniEngineUnity::HEU_InputAssetPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9610))
// CS Name: ::HoudiniEngineUnity::HEU_InputAssetPreset*
class CORDL_TYPE HEU_InputAssetPreset : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _gameObjectName offset 0x10
 __declspec(property(get=__get__gameObjectName, put=__set__gameObjectName)) ::StringW  _gameObjectName;

constexpr void __set__gameObjectName(::StringW  value) ;

constexpr ::StringW& __get__gameObjectName() ;

constexpr ::StringW const& __get__gameObjectName() const;

static inline ::HoudiniEngineUnity::HEU_InputAssetPreset* New_ctor() ;

/// @brief Method .ctor addr 0x214e860 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputAssetPreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_InputAssetPreset(HEU_InputAssetPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputAssetPreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_InputAssetPreset(HEU_InputAssetPreset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_InputAssetPreset()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputAssetPreset, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputAssetPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputAssetPreset*, "HoudiniEngineUnity", "HEU_InputAssetPreset");
