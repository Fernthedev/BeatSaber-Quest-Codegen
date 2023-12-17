#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CrashInfoViewController)
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class CrashManagerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class CrashInfoViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CrashInfoViewController);
// Type: ::CrashInfoViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5620))
// CS Name: ::CrashInfoViewController*
class CORDL_TYPE CrashInfoViewController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _crashManager offset 0x18
 __declspec(property(get=__get__crashManager, put=__set__crashManager)) ::GlobalNamespace::CrashManagerSO*  _crashManager;

/// @brief Field _text offset 0x20
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

constexpr void __set__crashManager(::GlobalNamespace::CrashManagerSO*  value) ;

constexpr ::GlobalNamespace::CrashManagerSO* __get__crashManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CrashManagerSO*> __get__crashManager() const;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

/// @brief Method Start addr 0x22af4a8 size 0x78 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::CrashInfoViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22af520 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrashInfoViewController(CrashInfoViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrashInfoViewController(CrashInfoViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrashInfoViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CrashInfoViewController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CrashInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrashInfoViewController*, "", "CrashInfoViewController");
