#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Spectrogram)
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class Spectrogram;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Spectrogram);
// Type: ::Spectrogram
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4999))
// CS Name: ::Spectrogram*
class CORDL_TYPE Spectrogram : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _setAsGlobal offset 0x18
 __declspec(property(get=__get__setAsGlobal, put=__set__setAsGlobal)) bool  _setAsGlobal;

/// @brief Field _meshRenderers offset 0x20
 __declspec(property(get=__get__meshRenderers, put=__set__meshRenderers)) ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>  _meshRenderers;

/// @brief Field _materialPropertyBlockController offset 0x28
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

/// @brief Field _spectrogramData offset 0x30
 __declspec(property(get=__get__spectrogramData, put=__set__spectrogramData)) ::GlobalNamespace::BasicSpectrogramData*  _spectrogramData;

 __declspec(property(get=get_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock;

constexpr void __set__setAsGlobal(bool  value) ;

constexpr bool& __get__setAsGlobal() ;

constexpr bool const& __get__setAsGlobal() const;

constexpr void __set__meshRenderers(::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>& __get__meshRenderers() ;

constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*> const& __get__meshRenderers() const;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

constexpr void __set__spectrogramData(::GlobalNamespace::BasicSpectrogramData*  value) ;

constexpr ::GlobalNamespace::BasicSpectrogramData* __get__spectrogramData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicSpectrogramData*> __get__spectrogramData() const;

static inline void setStaticF__spectrogramDataID(int32_t  value) ;

static inline int32_t getStaticF__spectrogramDataID() ;

static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock() ;

/// @brief Method get_materialPropertyBlock addr 0x23b6cfc size 0xb4 virtual false final false
inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock() ;

/// @brief Method Awake addr 0x23b6db0 size 0xf0 virtual false final false
inline void Awake() ;

/// @brief Method Update addr 0x23b6ea0 size 0x1a8 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::Spectrogram* New_ctor() ;

/// @brief Method .ctor addr 0x23b7048 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Spectrogram(Spectrogram && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spectrogram(Spectrogram const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Spectrogram()  = default;
public:


// Fields

// Static field _spectrogramDataID

// Static field _materialPropertyBlock


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Spectrogram, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Spectrogram);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Spectrogram*, "", "Spectrogram");
