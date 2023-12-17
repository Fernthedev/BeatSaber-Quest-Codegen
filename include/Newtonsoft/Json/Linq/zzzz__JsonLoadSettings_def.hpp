#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonLoadSettings)
namespace Newtonsoft::Json::Linq {
struct CommentHandling;
}
namespace Newtonsoft::Json::Linq {
struct LineInfoHandling;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonLoadSettings);
// Type: Newtonsoft.Json.Linq::JsonLoadSettings
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11970))
// CS Name: ::Newtonsoft.Json.Linq::JsonLoadSettings*
class CORDL_TYPE JsonLoadSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _commentHandling offset 0x10
 __declspec(property(get=__get__commentHandling, put=__set__commentHandling)) ::Newtonsoft::Json::Linq::CommentHandling  _commentHandling;

/// @brief Field _lineInfoHandling offset 0x14
 __declspec(property(get=__get__lineInfoHandling, put=__set__lineInfoHandling)) ::Newtonsoft::Json::Linq::LineInfoHandling  _lineInfoHandling;

 __declspec(property(get=get_CommentHandling, put=set_CommentHandling)) ::Newtonsoft::Json::Linq::CommentHandling  CommentHandling;

 __declspec(property(get=get_LineInfoHandling, put=set_LineInfoHandling)) ::Newtonsoft::Json::Linq::LineInfoHandling  LineInfoHandling;

constexpr void __set__commentHandling(::Newtonsoft::Json::Linq::CommentHandling  value) ;

constexpr ::Newtonsoft::Json::Linq::CommentHandling& __get__commentHandling() ;

constexpr ::Newtonsoft::Json::Linq::CommentHandling const& __get__commentHandling() const;

constexpr void __set__lineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling  value) ;

constexpr ::Newtonsoft::Json::Linq::LineInfoHandling& __get__lineInfoHandling() ;

constexpr ::Newtonsoft::Json::Linq::LineInfoHandling const& __get__lineInfoHandling() const;

/// @brief Method get_CommentHandling addr 0x2690e60 size 0x8 virtual false final false
inline ::Newtonsoft::Json::Linq::CommentHandling get_CommentHandling() ;

/// @brief Method set_CommentHandling addr 0x2690e68 size 0x64 virtual false final false
inline void set_CommentHandling(::Newtonsoft::Json::Linq::CommentHandling  value) ;

/// @brief Method get_LineInfoHandling addr 0x2690ecc size 0x8 virtual false final false
inline ::Newtonsoft::Json::Linq::LineInfoHandling get_LineInfoHandling() ;

/// @brief Method set_LineInfoHandling addr 0x2690ed4 size 0x64 virtual false final false
inline void set_LineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling  value) ;

static inline ::Newtonsoft::Json::Linq::JsonLoadSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2690f38 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "JsonLoadSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonLoadSettings(JsonLoadSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonLoadSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonLoadSettings(JsonLoadSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonLoadSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonLoadSettings, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonLoadSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonLoadSettings*, "Newtonsoft.Json.Linq", "JsonLoadSettings");
