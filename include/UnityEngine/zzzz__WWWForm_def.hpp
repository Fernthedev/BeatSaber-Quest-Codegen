#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WWWForm)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class WWWForm;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WWWForm);
// Type: UnityEngine::WWWForm
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15573))
// CS Name: ::UnityEngine::WWWForm*
class CORDL_TYPE WWWForm : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_dDash(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_dDash() ;

static inline void setStaticF_crlf(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_crlf() ;

static inline void setStaticF_contentTypeHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_contentTypeHeader() ;

static inline void setStaticF_dispositionHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_dispositionHeader() ;

static inline void setStaticF_endQuote(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_endQuote() ;

static inline void setStaticF_fileNameField(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_fileNameField() ;

static inline void setStaticF_ampersand(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ampersand() ;

static inline void setStaticF_equal(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_equal() ;

/// @brief Method get_DefaultEncoding addr 0x2eaccac size 0x8 virtual false final false
static inline ::System::Text::Encoding* get_DefaultEncoding() ;

// Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WWWForm(WWWForm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WWWForm(WWWForm const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WWWForm()  = default;
public:


// Fields

// Static field dDash

// Static field crlf

// Static field contentTypeHeader

// Static field dispositionHeader

// Static field endQuote

// Static field fileNameField

// Static field ampersand

// Static field equal


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WWWForm, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::WWWForm);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WWWForm*, "UnityEngine", "WWWForm");
