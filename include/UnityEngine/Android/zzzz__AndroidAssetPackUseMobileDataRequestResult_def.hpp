#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidAssetPackUseMobileDataRequestResult)
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackUseMobileDataRequestResult;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult);
// Type: UnityEngine.Android::AndroidAssetPackUseMobileDataRequestResult
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14924))
// CS Name: ::UnityEngine.Android::AndroidAssetPackUseMobileDataRequestResult*
class CORDL_TYPE AndroidAssetPackUseMobileDataRequestResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <allowed>k__BackingField offset 0x10
 __declspec(property(get=__get__allowed_k__BackingField, put=__set__allowed_k__BackingField)) bool  _allowed_k__BackingField;

constexpr void __set__allowed_k__BackingField(bool  value) ;

constexpr bool& __get__allowed_k__BackingField() ;

constexpr bool const& __get__allowed_k__BackingField() const;

static inline ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult* New_ctor(bool  allowed) ;

/// @brief Method .ctor addr 0x2c8cc04 size 0x28 virtual false final false
inline void _ctor(bool  allowed) ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackUseMobileDataRequestResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidAssetPackUseMobileDataRequestResult(AndroidAssetPackUseMobileDataRequestResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackUseMobileDataRequestResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidAssetPackUseMobileDataRequestResult(AndroidAssetPackUseMobileDataRequestResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidAssetPackUseMobileDataRequestResult()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*, "UnityEngine.Android", "AndroidAssetPackUseMobileDataRequestResult");
