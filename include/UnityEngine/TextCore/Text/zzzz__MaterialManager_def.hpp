#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialManager)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class MaterialManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::MaterialManager);
// Type: UnityEngine.TextCore.Text::MaterialManager
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13696))
// CS Name: ::UnityEngine.TextCore.Text::MaterialManager*
class CORDL_TYPE MaterialManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_FallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Material*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Material*>* getStaticF_s_FallbackMaterials() ;

/// @brief Method GetFallbackMaterial addr 0x2d42abc size 0x360 virtual false final false
static inline ::UnityEngine::Material* GetFallbackMaterial(::UnityEngine::Material*  sourceMaterial, ::UnityEngine::Material*  targetMaterial) ;

/// @brief Method GetFallbackMaterial addr 0x2d42e1c size 0x1d0 virtual false final false
static inline ::UnityEngine::Material* GetFallbackMaterial(::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ::UnityEngine::Material*  sourceMaterial, int32_t  atlasIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialManager(MaterialManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialManager(MaterialManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialManager()  = default;
public:


// Fields

// Static field s_FallbackMaterials


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MaterialManager, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MaterialManager*, "UnityEngine.TextCore.Text", "MaterialManager");
