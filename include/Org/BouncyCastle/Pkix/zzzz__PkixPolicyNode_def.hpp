#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixPolicyNode)
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixPolicyNode);
// Type: Org.BouncyCastle.Pkix::PkixPolicyNode
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1728))
// CS Name: ::Org.BouncyCastle.Pkix::PkixPolicyNode*
class CORDL_TYPE PkixPolicyNode : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field mChildren offset 0x10
 __declspec(property(get=__get_mChildren, put=__set_mChildren)) ::System::Collections::IList*  mChildren;

/// @brief Field mDepth offset 0x18
 __declspec(property(get=__get_mDepth, put=__set_mDepth)) int32_t  mDepth;

/// @brief Field mExpectedPolicies offset 0x20
 __declspec(property(get=__get_mExpectedPolicies, put=__set_mExpectedPolicies)) ::Org::BouncyCastle::Utilities::Collections::ISet*  mExpectedPolicies;

/// @brief Field mParent offset 0x28
 __declspec(property(get=__get_mParent, put=__set_mParent)) ::Org::BouncyCastle::Pkix::PkixPolicyNode*  mParent;

/// @brief Field mPolicyQualifiers offset 0x30
 __declspec(property(get=__get_mPolicyQualifiers, put=__set_mPolicyQualifiers)) ::Org::BouncyCastle::Utilities::Collections::ISet*  mPolicyQualifiers;

/// @brief Field mValidPolicy offset 0x38
 __declspec(property(get=__get_mValidPolicy, put=__set_mValidPolicy)) ::StringW  mValidPolicy;

/// @brief Field mCritical offset 0x40
 __declspec(property(get=__get_mCritical, put=__set_mCritical)) bool  mCritical;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_Children)) ::System::Collections::IEnumerable*  Children;

 __declspec(property(get=get_IsCritical, put=set_IsCritical)) bool  IsCritical;

 __declspec(property(get=get_PolicyQualifiers)) ::Org::BouncyCastle::Utilities::Collections::ISet*  PolicyQualifiers;

 __declspec(property(get=get_ValidPolicy)) ::StringW  ValidPolicy;

 __declspec(property(get=get_HasChildren)) bool  HasChildren;

 __declspec(property(get=get_ExpectedPolicies, put=set_ExpectedPolicies)) ::Org::BouncyCastle::Utilities::Collections::ISet*  ExpectedPolicies;

 __declspec(property(get=get_Parent, put=set_Parent)) ::Org::BouncyCastle::Pkix::PkixPolicyNode*  Parent;

constexpr void __set_mChildren(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_mChildren() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_mChildren() const;

constexpr void __set_mDepth(int32_t  value) ;

constexpr int32_t& __get_mDepth() ;

constexpr int32_t const& __get_mDepth() const;

constexpr void __set_mExpectedPolicies(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* __get_mExpectedPolicies() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> __get_mExpectedPolicies() const;

constexpr void __set_mParent(::Org::BouncyCastle::Pkix::PkixPolicyNode*  value) ;

constexpr ::Org::BouncyCastle::Pkix::PkixPolicyNode* __get_mParent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixPolicyNode*> __get_mParent() const;

constexpr void __set_mPolicyQualifiers(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* __get_mPolicyQualifiers() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> __get_mPolicyQualifiers() const;

constexpr void __set_mValidPolicy(::StringW  value) ;

constexpr ::StringW& __get_mValidPolicy() ;

constexpr ::StringW const& __get_mValidPolicy() const;

constexpr void __set_mCritical(bool  value) ;

constexpr bool& __get_mCritical() ;

constexpr bool const& __get_mCritical() const;

/// @brief Method get_Depth addr 0x11125e8 size 0x8 virtual true final false
inline int32_t get_Depth() ;

/// @brief Method get_Children addr 0x11125f0 size 0x68 virtual true final false
inline ::System::Collections::IEnumerable* get_Children() ;

/// @brief Method get_IsCritical addr 0x1112658 size 0x8 virtual true final false
inline bool get_IsCritical() ;

/// @brief Method set_IsCritical addr 0x1112660 size 0xc virtual true final false
inline void set_IsCritical(bool  value) ;

/// @brief Method get_PolicyQualifiers addr 0x111266c size 0x68 virtual true final false
inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_PolicyQualifiers() ;

/// @brief Method get_ValidPolicy addr 0x11126d4 size 0x8 virtual true final false
inline ::StringW get_ValidPolicy() ;

/// @brief Method get_HasChildren addr 0x11126dc size 0xb0 virtual true final false
inline bool get_HasChildren() ;

/// @brief Method get_ExpectedPolicies addr 0x111278c size 0x68 virtual true final false
inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_ExpectedPolicies() ;

/// @brief Method set_ExpectedPolicies addr 0x11127f4 size 0x70 virtual true final false
inline void set_ExpectedPolicies(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

/// @brief Method get_Parent addr 0x1112864 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* get_Parent() ;

/// @brief Method set_Parent addr 0x111286c size 0x8 virtual true final false
inline void set_Parent(::Org::BouncyCastle::Pkix::PkixPolicyNode*  value) ;

static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* New_ctor(::System::Collections::IList*  children, int32_t  depth, ::Org::BouncyCastle::Utilities::Collections::ISet*  expectedPolicies, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  parent, ::Org::BouncyCastle::Utilities::Collections::ISet*  policyQualifiers, ::StringW  validPolicy, bool  critical) ;

/// @brief Method .ctor addr 0x10f6b30 size 0xd0 virtual false final false
inline void _ctor(::System::Collections::IList*  children, int32_t  depth, ::Org::BouncyCastle::Utilities::Collections::ISet*  expectedPolicies, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  parent, ::Org::BouncyCastle::Utilities::Collections::ISet*  policyQualifiers, ::StringW  validPolicy, bool  critical) ;

/// @brief Method AddChild addr 0x1112874 size 0xc8 virtual true final false
inline void AddChild(::Org::BouncyCastle::Pkix::PkixPolicyNode*  child) ;

/// @brief Method RemoveChild addr 0x111293c size 0xac virtual true final false
inline void RemoveChild(::Org::BouncyCastle::Pkix::PkixPolicyNode*  child) ;

/// @brief Method ToString addr 0x11129e8 size 0x54 virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x1112a3c size 0x4a8 virtual true final false
inline ::StringW ToString(::StringW  indent) ;

/// @brief Method Clone addr 0x1112ee4 size 0x10 virtual true final false
inline ::System::Object* Clone() ;

/// @brief Method Copy addr 0x1112ef4 size 0x45c virtual true final false
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "PkixPolicyNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixPolicyNode(PkixPolicyNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixPolicyNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixPolicyNode(PkixPolicyNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixPolicyNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixPolicyNode, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixPolicyNode);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixPolicyNode*, "Org.BouncyCastle.Pkix", "PkixPolicyNode");
