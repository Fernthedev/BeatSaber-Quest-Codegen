#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_LayerMask)
namespace UnityEngine {
struct LayerMask;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LayerMask;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_LayerMask);
// Type: HoudiniEngineUnity::Test_LayerMask
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9925))
// CS Name: ::HoudiniEngineUnity::Test_LayerMask*
class CORDL_TYPE Test_LayerMask : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field self offset 0x10
 __declspec(property(get=__get_self, put=__set_self)) ::UnityEngine::LayerMask  self;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>*() noexcept;

constexpr void __set_self(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get_self() ;

constexpr ::UnityEngine::LayerMask const& __get_self() const;

static inline ::HoudiniEngineUnity::Test_LayerMask* New_ctor(::UnityEngine::LayerMask  self) ;

/// @brief Method .ctor addr 0x21e6950 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::LayerMask  self) ;

/// @brief Method IsEquivalentTo addr 0x21e6978 size 0xf8 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_LayerMask*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Test_LayerMask(Test_LayerMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Test_LayerMask(Test_LayerMask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Test_LayerMask()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_LayerMask, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_LayerMask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LayerMask*, "HoudiniEngineUnity", "Test_LayerMask");
