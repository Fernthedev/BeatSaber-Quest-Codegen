#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ToneMappingExtensions)
namespace GlobalNamespace {
struct ToneMapping;
}
// Forward declare root types
namespace GlobalNamespace {
class ToneMappingExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ToneMappingExtensions);
// Type: ::ToneMappingExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14491))
// CS Name: ::ToneMappingExtensions*
class CORDL_TYPE ToneMappingExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__shaderKeywordMap(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF__shaderKeywordMap() ;

/// @brief Method SetShaderKeyword addr 0x21081e4 size 0x94 virtual false final false
static inline void SetShaderKeyword(::GlobalNamespace::ToneMapping  toneMapping) ;

// Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToneMappingExtensions(ToneMappingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToneMappingExtensions(ToneMappingExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ToneMappingExtensions()  = default;
public:


// Fields

// Static field _shaderKeywordMap


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToneMappingExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToneMappingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToneMappingExtensions*, "", "ToneMappingExtensions");
