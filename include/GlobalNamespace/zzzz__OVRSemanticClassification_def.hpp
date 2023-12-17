#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRSemanticClassification)
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSemanticClassification;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSemanticClassification);
// Type: ::OVRSemanticClassification
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7989))
// CS Name: ::OVRSemanticClassification*
class CORDL_TYPE OVRSemanticClassification : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field LabelSeparator offset 0x0
static constexpr char16_t  LabelSeparator{u','};

/// @brief Field _labels offset 0x18
 __declspec(property(get=__get__labels, put=__set__labels)) ::System::Collections::Generic::List_1<::StringW>*  _labels;

 __declspec(property(get=get_Labels)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  Labels;

/// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
constexpr operator  ::GlobalNamespace::IOVRSceneComponent*() noexcept;

constexpr void __set__labels(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__labels() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__labels() const;

/// @brief Method get_Labels addr 0x278c038 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_Labels() ;

/// @brief Method Contains addr 0x278c040 size 0x160 virtual false final false
inline bool Contains(::StringW  label) ;

/// @brief Method Awake addr 0x278c1a0 size 0xd0 virtual false final false
inline void Awake() ;

/// @brief Method IOVRSceneComponent.Initialize addr 0x278c270 size 0x120 virtual true final true
inline void IOVRSceneComponent_Initialize() ;

/// @brief Method ValidateAndUpgradeLabels addr 0x278c390 size 0x478 virtual false final false
static inline ::StringW ValidateAndUpgradeLabels(::StringW  labels) ;

static inline ::GlobalNamespace::OVRSemanticClassification* New_ctor() ;

/// @brief Method .ctor addr 0x278c808 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSemanticClassification(OVRSemanticClassification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSemanticClassification(OVRSemanticClassification const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRSemanticClassification()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSemanticClassification, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSemanticClassification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticClassification*, "", "OVRSemanticClassification");
