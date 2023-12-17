#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Transform)
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Transform;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Transform);
// Type: HoudiniEngineUnity::Test_Transform
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9907))
// CS Name: ::HoudiniEngineUnity::Test_Transform*
class CORDL_TYPE Test_Transform : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field self offset 0x10
 __declspec(property(get=__get_self, put=__set_self)) ::UnityEngine::Transform*  self;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>"
constexpr operator  ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>*() noexcept;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>*() noexcept;

constexpr void __set_self(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_self() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_self() const;

static inline ::HoudiniEngineUnity::Test_Transform* New_ctor(::UnityEngine::Transform*  self) ;

/// @brief Method .ctor addr 0x21e4868 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::Transform*  self) ;

/// @brief Method IsNull addr 0x21e4890 size 0x60 virtual true final true
inline bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x21e48f0 size 0x1cc virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Transform*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "Test_Transform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Test_Transform(Test_Transform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Test_Transform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Test_Transform(Test_Transform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Test_Transform()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Transform, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Transform);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Transform*, "HoudiniEngineUnity", "Test_Transform");
