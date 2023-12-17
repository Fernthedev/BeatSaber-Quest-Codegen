#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongTimeToShaderWriter)
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeToShaderWriter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongTimeToShaderWriter);
// Type: ::SongTimeToShaderWriter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5977))
// CS Name: ::SongTimeToShaderWriter*
class CORDL_TYPE SongTimeToShaderWriter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioTimeSource offset 0x18
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

static inline void setStaticF__songTimePropertyId(int32_t  value) ;

static inline int32_t getStaticF__songTimePropertyId() ;

/// @brief Method Update addr 0x230da14 size 0x240 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::SongTimeToShaderWriter* New_ctor() ;

/// @brief Method .ctor addr 0x230dc54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeToShaderWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongTimeToShaderWriter(SongTimeToShaderWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeToShaderWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongTimeToShaderWriter(SongTimeToShaderWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongTimeToShaderWriter()  = default;
public:


// Fields

// Static field _songTimePropertyId


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeToShaderWriter, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeToShaderWriter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeToShaderWriter*, "", "SongTimeToShaderWriter");
