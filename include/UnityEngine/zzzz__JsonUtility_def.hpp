#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonUtility)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class JsonUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::JsonUtility);
// Type: UnityEngine::JsonUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16159))
// CS Name: ::UnityEngine::JsonUtility*
class CORDL_TYPE JsonUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToJsonInternal addr 0x2d1025c size 0x44 virtual false final false
static inline ::StringW ToJsonInternal(::System::Object*  obj, bool  prettyPrint) ;

/// @brief Method FromJsonInternal addr 0x2d102a0 size 0x54 virtual false final false
static inline ::System::Object* FromJsonInternal(::StringW  json, ::System::Object*  objectToOverwrite, ::System::Type*  type) ;

/// @brief Method ToJson addr 0x2d102f4 size 0x8 virtual false final false
static inline ::StringW ToJson(::System::Object*  obj) ;

/// @brief Method ToJson addr 0x2d102fc size 0x174 virtual false final false
static inline ::StringW ToJson(::System::Object*  obj, bool  prettyPrint) ;

/// @brief Method FromJson addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T FromJson(::StringW  json) ;

/// @brief Method FromJson addr 0x2d10470 size 0x1d0 virtual false final false
static inline ::System::Object* FromJson(::StringW  json, ::System::Type*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtility(JsonUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtility(JsonUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::JsonUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::JsonUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JsonUtility*, "UnityEngine", "JsonUtility");
