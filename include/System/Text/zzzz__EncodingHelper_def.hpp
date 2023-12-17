#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingHelper)
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System::Text {
class EncodingHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncodingHelper);
// Type: System.Text::EncodingHelper
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2877))
// CS Name: ::System.Text::EncodingHelper*
class CORDL_TYPE EncodingHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_utf8EncodingWithoutMarkers(::System::Text::Encoding*  value) ;

static inline ::System::Text::Encoding* getStaticF_utf8EncodingWithoutMarkers() ;

static inline void setStaticF_lockobj(::System::Object*  value) ;

static inline ::System::Object* getStaticF_lockobj() ;

static inline void setStaticF_i18nAssembly(::System::Reflection::Assembly*  value) ;

static inline ::System::Reflection::Assembly* getStaticF_i18nAssembly() ;

static inline void setStaticF_i18nDisabled(bool  value) ;

static inline bool getStaticF_i18nDisabled() ;

/// @brief Method get_UTF8Unmarked addr 0x24500ec size 0x1f0 virtual false final false
static inline ::System::Text::Encoding* get_UTF8Unmarked() ;

/// @brief Method InternalCodePage addr 0x24502dc size 0x4 virtual false final false
static inline ::StringW InternalCodePage(ByRef<int32_t>  code_page) ;

/// @brief Method GetDefaultEncoding addr 0x244cf88 size 0x17c virtual false final false
static inline ::System::Text::Encoding* GetDefaultEncoding() ;

/// @brief Method InvokeI18N addr 0x244b3d8 size 0x70c virtual false final false
static inline ::System::Object* InvokeI18N(::StringW  name, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

// Ctor Parameters [CppParam { name: "", ty: "EncodingHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncodingHelper(EncodingHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncodingHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncodingHelper(EncodingHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EncodingHelper()  = default;
public:


// Fields

// Static field utf8EncodingWithoutMarkers

// Static field lockobj

// Static field i18nAssembly

// Static field i18nDisabled


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncodingHelper, 0x10>, "Size mismatch!");

} // namespace end def System::Text
NEED_NO_BOX(::System::Text::EncodingHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingHelper*, "System.Text", "EncodingHelper");
