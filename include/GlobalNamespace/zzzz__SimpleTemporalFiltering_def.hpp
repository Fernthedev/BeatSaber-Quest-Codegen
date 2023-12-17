#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTemporalFiltering)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTemporalFiltering;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTemporalFiltering);
// Type: ::SimpleTemporalFiltering
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15311))
// CS Name: ::SimpleTemporalFiltering*
class CORDL_TYPE SimpleTemporalFiltering : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _temporalFilteringTextures offset 0x10
 __declspec(property(get=__get__temporalFilteringTextures, put=__set__temporalFilteringTextures)) ::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>  _temporalFilteringTextures;

/// @brief Field _prevTemporalFilteringTextureIdx offset 0x18
 __declspec(property(get=__get__prevTemporalFilteringTextureIdx, put=__set__prevTemporalFilteringTextureIdx)) int32_t  _prevTemporalFilteringTextureIdx;

/// @brief Field _temporalFilteringMaterial offset 0x20
 __declspec(property(get=__get__temporalFilteringMaterial, put=__set__temporalFilteringMaterial)) ::UnityEngine::Material*  _temporalFilteringMaterial;

/// @brief Field _bufferTexID offset 0x28
 __declspec(property(get=__get__bufferTexID, put=__set__bufferTexID)) int32_t  _bufferTexID;

constexpr void __set__temporalFilteringTextures(::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>& __get__temporalFilteringTextures() ;

constexpr ::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*> const& __get__temporalFilteringTextures() const;

constexpr void __set__prevTemporalFilteringTextureIdx(int32_t  value) ;

constexpr int32_t& __get__prevTemporalFilteringTextureIdx() ;

constexpr int32_t const& __get__prevTemporalFilteringTextureIdx() const;

constexpr void __set__temporalFilteringMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__temporalFilteringMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__temporalFilteringMaterial() const;

constexpr void __set__bufferTexID(int32_t  value) ;

constexpr int32_t& __get__bufferTexID() ;

constexpr int32_t const& __get__bufferTexID() const;

static inline ::GlobalNamespace::SimpleTemporalFiltering* New_ctor() ;

/// @brief Method .ctor addr 0x280bd34 size 0xcc virtual false final false
inline void _ctor() ;

/// @brief Method FilterTexture addr 0x280be00 size 0x180 virtual false final false
inline ::UnityEngine::RenderTexture* FilterTexture(::UnityEngine::RenderTexture*  src) ;

/// @brief Method CreateRenderTexturesIfNeeded addr 0x280bf80 size 0x28c virtual false final false
inline void CreateRenderTexturesIfNeeded(int32_t  width, int32_t  height) ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTemporalFiltering", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleTemporalFiltering(SimpleTemporalFiltering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTemporalFiltering", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleTemporalFiltering(SimpleTemporalFiltering const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleTemporalFiltering()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTemporalFiltering, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTemporalFiltering);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTemporalFiltering*, "", "SimpleTemporalFiltering");
