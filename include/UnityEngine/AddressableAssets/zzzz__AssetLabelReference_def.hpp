#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetLabelReference)
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetLabelReference);
// Type: UnityEngine.AddressableAssets::AssetLabelReference
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14081))
// CS Name: ::UnityEngine.AddressableAssets::AssetLabelReference*
class CORDL_TYPE AssetLabelReference : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_LabelString offset 0x10
 __declspec(property(get=__get_m_LabelString, put=__set_m_LabelString)) ::StringW  m_LabelString;

 __declspec(property(get=get_labelString, put=set_labelString)) ::StringW  labelString;

 __declspec(property(get=get_RuntimeKey)) ::System::Object*  RuntimeKey;

/// @brief Convert operator to "::UnityEngine::AddressableAssets::IKeyEvaluator"
constexpr operator  ::UnityEngine::AddressableAssets::IKeyEvaluator*() noexcept;

constexpr void __set_m_LabelString(::StringW  value) ;

constexpr ::StringW& __get_m_LabelString() ;

constexpr ::StringW const& __get_m_LabelString() const;

/// @brief Method get_labelString addr 0x2a239b8 size 0x8 virtual false final false
inline ::StringW get_labelString() ;

/// @brief Method set_labelString addr 0x2a239c0 size 0x8 virtual false final false
inline void set_labelString(::StringW  value) ;

/// @brief Method get_RuntimeKey addr 0x2a239c8 size 0x58 virtual true final true
inline ::System::Object* get_RuntimeKey() ;

/// @brief Method RuntimeKeyIsValid addr 0x2a23a20 size 0x7c virtual true final true
inline bool RuntimeKeyIsValid() ;

/// @brief Method GetHashCode addr 0x2a23a9c size 0x20 virtual true final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::AddressableAssets::AssetLabelReference* New_ctor() ;

/// @brief Method .ctor addr 0x2a23abc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AssetLabelReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetLabelReference(AssetLabelReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetLabelReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetLabelReference(AssetLabelReference const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetLabelReference()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetLabelReference, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetLabelReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetLabelReference*, "UnityEngine.AddressableAssets", "AssetLabelReference");
