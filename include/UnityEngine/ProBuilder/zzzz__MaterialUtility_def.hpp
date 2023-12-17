#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialUtility)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MaterialUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MaterialUtility);
// Type: UnityEngine.ProBuilder::MaterialUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12138))
// CS Name: ::UnityEngine.ProBuilder::MaterialUtility*
class CORDL_TYPE MaterialUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_MaterialArray(::System::Collections::Generic::List_1<::UnityEngine::Material*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Material*>* getStaticF_s_MaterialArray() ;

/// @brief Method GetMaterialCount addr 0x2b47ed0 size 0xd0 virtual false final false
static inline int32_t GetMaterialCount(::UnityEngine::Renderer*  renderer) ;

/// @brief Method GetSharedMaterial addr 0x2b47fa0 size 0x140 virtual false final false
static inline ::UnityEngine::Material* GetSharedMaterial(::UnityEngine::Renderer*  renderer, int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialUtility(MaterialUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialUtility(MaterialUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialUtility()  = default;
public:


// Fields

// Static field s_MaterialArray


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MaterialUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::MaterialUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MaterialUtility*, "UnityEngine.ProBuilder", "MaterialUtility");
