#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_OutputAttributesStore)
namespace HoudiniEngineUnity {
class HEU_OutputAttributeDictionary;
}
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttributesStore;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_OutputAttributesStore);
// Type: HoudiniEngineUnity::HEU_OutputAttributesStore
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9668))
// CS Name: ::HoudiniEngineUnity::HEU_OutputAttributesStore*
class CORDL_TYPE HEU_OutputAttributesStore : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _attributes offset 0x18
 __declspec(property(get=__get__attributes, put=__set__attributes)) ::HoudiniEngineUnity::HEU_OutputAttributeDictionary*  _attributes;

constexpr void __set__attributes(::HoudiniEngineUnity::HEU_OutputAttributeDictionary*  value) ;

constexpr ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* __get__attributes() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*> __get__attributes() const;

/// @brief Method SetAttribute addr 0x2183a28 size 0xfc virtual false final false
inline void SetAttribute(::HoudiniEngineUnity::HEU_OutputAttribute*  attribute) ;

/// @brief Method GetAttribute addr 0x2183b24 size 0x70 virtual false final false
inline ::HoudiniEngineUnity::HEU_OutputAttribute* GetAttribute(::StringW  name) ;

/// @brief Method Clear addr 0x2183b94 size 0x50 virtual false final false
inline void Clear() ;

static inline ::HoudiniEngineUnity::HEU_OutputAttributesStore* New_ctor() ;

/// @brief Method .ctor addr 0x2183be4 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_OutputAttributesStore(HEU_OutputAttributesStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_OutputAttributesStore(HEU_OutputAttributesStore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_OutputAttributesStore()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_OutputAttributesStore, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttributesStore);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttributesStore*, "HoudiniEngineUnity", "HEU_OutputAttributesStore");
