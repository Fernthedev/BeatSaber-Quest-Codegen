#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
CORDL_MODULE_EXPORT(HEU_CookedEventData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_CookedEventData);
// Type: HoudiniEngineUnity::HEU_CookedEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9595))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9597))
// CS Name: ::HoudiniEngineUnity::HEU_CookedEventData*
class CORDL_TYPE HEU_CookedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::HoudiniEngineUnity::HEU_AssetEventData)]{};

static inline ::HoudiniEngineUnity::HEU_CookedEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects) ;

/// @brief Method .ctor addr 0x214e2d4 size 0x48 virtual false final false
inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_CookedEventData(HEU_CookedEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_CookedEventData(HEU_CookedEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_CookedEventData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookedEventData, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookedEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookedEventData*, "HoudiniEngineUnity", "HEU_CookedEventData");
