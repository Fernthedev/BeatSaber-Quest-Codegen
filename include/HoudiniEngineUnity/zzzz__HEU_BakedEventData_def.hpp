#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
CORDL_MODULE_EXPORT(HEU_BakedEventData)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_BakedEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_BakedEventData);
// Type: HoudiniEngineUnity::HEU_BakedEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9595))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9598))
// CS Name: ::HoudiniEngineUnity::HEU_BakedEventData*
class CORDL_TYPE HEU_BakedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::HoudiniEngineUnity::HEU_AssetEventData)]{};

/// @brief Field IsNewBake offset 0x2c
 __declspec(property(get=__get_IsNewBake, put=__set_IsNewBake)) bool  IsNewBake;

constexpr void __set_IsNewBake(bool  value) ;

constexpr bool& __get_IsNewBake() ;

constexpr bool const& __get_IsNewBake() const;

static inline ::HoudiniEngineUnity::HEU_BakedEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects, bool  isNewBake) ;

/// @brief Method .ctor addr 0x214e31c size 0x6c virtual false final false
inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects, bool  isNewBake) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_BakedEventData(HEU_BakedEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_BakedEventData(HEU_BakedEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_BakedEventData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_BakedEventData, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BakedEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BakedEventData*, "HoudiniEngineUnity", "HEU_BakedEventData");
