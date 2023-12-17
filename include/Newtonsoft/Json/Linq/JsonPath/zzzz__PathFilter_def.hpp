#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathFilter)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::PathFilter);
// Type: Newtonsoft.Json.Linq.JsonPath::PathFilter
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12020))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::PathFilter*
class CORDL_TYPE PathFilter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ExecuteFilter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  current, bool  errorWhenNoMatch) ;

/// @brief Method GetTokenIndex addr 0x26abca0 size 0x2d8 virtual false final false
static inline ::Newtonsoft::Json::Linq::JToken* GetTokenIndex(::Newtonsoft::Json::Linq::JToken*  t, bool  errorWhenNoMatch, int32_t  index) ;

static inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* New_ctor() ;

/// @brief Method .ctor addr 0x26ab624 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PathFilter(PathFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathFilter(PathFilter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PathFilter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::PathFilter, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::PathFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::PathFilter*, "Newtonsoft.Json.Linq.JsonPath", "PathFilter");
